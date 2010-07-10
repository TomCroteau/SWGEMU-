--Copyright (C) 2010 <SWGEmu>


--This File is part of Core3.

--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 


object_draft_schematic_munition_detonator_thermal_class_a = object_draft_schematic_munition_shared_detonator_thermal_class_a:new {

   templateType = DRAFTSCHEMATIC,

   groupName = "craftMunitionsGroupD", -- Group schematic is awarded in (See skills table)

   craftingToolTab = 1, -- (See DraftSchemticImplementation.h)
   complexity = 30, 
   size = 3, 

   xpType = "crafting_weapons_general", 
   xp = 96, 

   assemblySkill = "weapon_assembly", 
   experimentingSkill = "weapon_experimentation", 

   ingredientTemplateNames = {"craft_munition_ingredients_n", "craft_munition_ingredients_n", "craft_munition_ingredients_n", "craft_munition_ingredients_n", "craft_munition_ingredients_n", "craft_munition_ingredients_n", "craft_munition_ingredients_n", "craft_munition_ingredients_n"},
   ingredientTitleNames = {"shell", "thumb_trigger", "activation_indicator", "warhead_insulator", "warhead_assembly", "null_field_generator", "warhead_fusing", "warhead_booster"},
   ingredientSlotType = {0, 0, 0, 0, 2, 2, 2, 4},
   resourceTypes = {"metal", "petrochem_inert_polymer", "steel_thoranium", "ore_siliclastic_crism", "object/tangible/component/munition/shared_warhead_medium.iff", "object/tangible/component/munition/shared_warhead_stabilizer.iff", "object/tangible/component/munition/shared_warhead_fusing_mechanism.iff", "object/tangible/component/munition/shared_enhanced_destructive_pulse_channeling.iff"},
   resourceQuantities = {10, 1, 15, 3, 1, 1, 1, 1},
   combineTypes = {0, 0, 0, 0, 1, 1, 1, 1},
   contribution = {100, 100, 100, 100, 100, 100, 100, 100},

   numberExperimentalProperties = {1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2},
   experimentalProperties = {"XX", "XX", "OQ", "SR", "OQ", "SR", "OQ", "SR", "OQ", "SR", "SR", "OQ", "SR", "OQ", "SR", "OQ", "SR", "OQ", "SR", "XX", "OQ", "SR", "OQ", "SR", "OQ", "SR"},
   experimentalWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
   experimentalGroupTitles = {"null", "null", "expDamage", "expDamage", "expDamage", "expDamage", "null", "expRange", "expRange", "expRange", "expRange", "null", "expEffeciency", "expEffeciency", "expEffeciency"},
   experimentalSubGroupTitles = {"null", "null", "mindamage", "maxdamage", "attackspeed", "woundchance", "hitpoints", "zerorangemod", "maxrangemod", "midrangemod", "midrange", "maxrange", "attackhealthcost", "attackactioncost", "attackmindcost"},
   experimentalMin = {0, 0, 570, 1334, 5.4, 7, 1000, -16, -45, 0, 10, 64, 98, 98, 46},
   experimentalMax = {0, 0, 870, 1690, 2.4, 13, 1000, 14, 15, 30, 30, 64, 53, 53, 25},
   experimentalPrecision = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

   tanoCRC = 2966006759, -- Script: 'object/weapon/ranged/grenade/grenade_thermal_detonator.iff'
}
ObjectTemplates:addTemplate(object_draft_schematic_munition_detonator_thermal_class_a, "object/draft_schematic/munition/detonator_thermal_class_a.iff")
