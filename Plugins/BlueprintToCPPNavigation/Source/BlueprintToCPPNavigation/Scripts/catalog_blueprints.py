# Import modules
import unreal
import json
import os

# Define helpers
def get_all_blueprints():
    # Use the Asset Registry to find all Blueprint assets
    asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()
    asset_data = asset_registry.get_assets_by_class("Blueprint")
    return asset_data

def get_blueprint_details(blueprint_asset):
    blueprint = unreal.EditorAssetLibrary.load_asset(blueprint_asset.object_path)
    if not blueprint:
        return None
    
    # Basic Blueprint Information
    blueprint_info = {
        'name': blueprint.get_name(),
        'path': blueprint.get_path_name(),
        'parent_class': blueprint.get_parent_class().get_name() if blueprint.get_parent_class() else 'None',
        'category': blueprint.get_category() if blueprint.get_category() else 'Uncategorized',
        'variables': [],
        'functions': []
    }
    
    # Extract Variables
    variables = blueprint.get_editor_property('new_variables')
    for var in variables:
        var_info = {
            'name': var.get_name(),
            'type': var.get_editor_property('variable_type').get_display_name(),
            'default_value': var.get_editor_property('default_value')
        }
        blueprint_info['variables'].append(var_info)
    
    # Extract Functions
    functions = blueprint.get_editor_property('uber_graph_pages')
    for func in functions:
        func_info = {
            'name': func.get_name(),
            'flags': func.get_function_flags(),
            # Add more function details as needed
        }
        blueprint_info['functions'].append(func_info)
    
    return blueprint_info

# Catalog blueprints
def catalog_blueprints():
    blueprints = get_all_blueprints()
    catalog = {}

    for bp_asset in blueprints:
        bp_details = get_blueprint_details(bp_asset)
        if not bp_details:
            continue
        
        category = bp_details['category']
        if category not in catalog:
            catalog[category] = []
        
        catalog[category].append(bp_details)
    
    return catalog

# export as JSON
def export_to_json(data, output_path):
    # Ensure the directory exists
    os.makedirs(os.path.dirname(output_path), exist_ok=True)
    
    with open(output_path, 'w') as json_file:
        json.dump(data, json_file, indent=4)
    
    unreal.log(f"Blueprint catalog exported to {output_path}")

# Main
def main():
    catalog = catalog_blueprints()
    output_path = os.path.join(unreal.Paths.project_content_dir(), "BlueprintCatalog.json")
    export_to_json(catalog, output_path)

# Execute the script
if __name__ == "__main__":
    main()

example_output = """
{
    "Gameplay": [
        {
            "name": "BP_PlayerCharacter",
            "path": "/Game/Blueprints/BP_PlayerCharacter.BP_PlayerCharacter",
            "parent_class": "Character",
            "category": "Gameplay",
            "variables": [
                {
                    "name": "Health",
                    "type": "Float",
                    "default_value": 100.0
                },
                {
                    "name": "Speed",
                    "type": "Float",
                    "default_value": 600.0
                }
            ],
            "functions": [
                {
                    "name": "MoveForward",
                    "flags": 0
                },
                {
                    "name": "TakeDamage",
                    "flags": 0
                }
            ]
        }
    ],
    "UI": [
        {
            "name": "BP_MainMenu",
            "path": "/Game/UI/BP_MainMenu.BP_MainMenu",
            "parent_class": "UserWidget",
            "category": "UI",
            "variables": [],
            "functions": [
                {
                    "name": "InitializeMenu",
                    "flags": 0
                }
            ]
        }
    ]
}
"""
