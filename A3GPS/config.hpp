#include "menu\menu.hpp"
#include "misc\text_dialog.hpp"

class CfgHints
{
	class CustomGPS
	{
		// Topic title (displayed only in topic listbox in Field Manual)
		displayName = "GPS";
		class newPath
		{
			displayName = "Nouveau trajet";
			displayNameShort = "Nouveau trajet";
			description = "Cliquez sur la carte du menu en faisant <t underline='true'>SHIFT+CLICK</t> sur la route où vous voulez aller.<br/>Le GPS va ensuite essayer de trouver le chemin le plus court jusqu'a ce point.<br/>Cette opération peut prendre jusqu'a 3 minutes selon les performances et la distance du trajet.";
            tip = "Les trajets récents peuvent être enregistrés et ainsi être rechargés plus tard pour plus de rapidité.";
			arguments[] = {};
			// Optional image
			image = "\A3\ui_f\data\GUI\Rsc\RscDisplayArsenal\gps_ca.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class loadSavedPath
		{
			displayName = "Chargement d'un trajet sauvegardé";
			displayNameShort = "Chargement d'une sauvegarde";
			description = "Charge un trajet dans la liste des trajets sauvegardés. <br/>Cette opération est beaucoup plus rapide qu'une recherche (+-10 secondes).";
            tip = "Il peut arriver que les trajets soient corrumpus/invalides si des mises à jour on été faites.";
			arguments[] = {};
			// Optional image
			image = "\A3\ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_load_ca.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class deleteSavedPath
		{	
			displayName = "Suppression d'un trajet sauvegardé";
			displayNameShort = "Suppression d'une sauvegarde";
			description = "Supprime un trajet dans la liste des trajets sauvegardés.";
            tip = "La sauvegarde est perdue à jamais.";
			arguments[] = {};
		};
		class stopProcess
		{
			displayName = "Arrêt du GPS";
			displayNameShort = "Arrêt du GPS";
			description = "Arrête le processus du GPS.<br/>Nettoie la map des marqueurs et aides sur la route.<br/>";
            tip = "Des données peuvent être perdues ou mal sauvegardées.";
			arguments[] = {};
		};
		class dropData
		{
			displayName = "Suppression du cache";
			displayNameShort = "Suppression du cache";
			description = "Reset les sauvegardes et certaines variables.<br/>Peut être utilisé en cas de plantage ou bugs du GPS.";
			arguments[] = {};
		};
		class savedList {
			displayName = "Liste des sauvegardes";
			displayNameShort = "Liste des sauvegardes";
			description = "Liste des trajets sauvegardés.";
			tip = "Pas d'interactions possibles.";
			arguments[] = {};
		};
		class arrived {
			displayName = "Arrivée";
			displayNameShort = "Arrivée";
			description = "Vous êtes arrivé à destination , la carte a été nettoyée.";
			tip = "N'hésitez pas à signaler au dev si des incohérences sont présentes.";
			image = "\A3\ui_f\data\Map\Markers\Military\flag_CA.paa";
			arguments[] = {};
		};
		class objectsColor {
			displayName = "Couleur des objets";
			displayNameShort = "Couleur des objets";
			description = "Couleur des flèches qui apparaissent sur la route.";
			tip = "Les flèches déjà présentes ne seront pas changées.";
			arguments[] = {};
		};
		class markersColor {
			displayName = "Couleur des markeurs";
			displayNameShort = "Couleur des markeurs";
			description = "Couleur des flèches qui apparaissent sur la carte.";
			tip = "Les flèches déjà présentes ne seront pas changées.";
			arguments[] = {};
		};
	};
};