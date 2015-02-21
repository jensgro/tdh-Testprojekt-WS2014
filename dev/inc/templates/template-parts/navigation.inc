<?php
  switch ($navigation){
      case "standard":
          include "inc/modules/navigation/navigation.inc";
          break;
      case "helfen":
          include "inc/modules/navigation/navigation-helfen.inc";
          break;
      case "kontakt":
          include "inc/modules/navigation/navigation-kontakt.inc";
          break;
      case "presse":
          include "inc/modules/navigation/navigation-presse.inc";
          break;
      case "veranstaltungen":
          include "inc/modules/navigation/navigation-veranstaltungen.inc";
          break;
      case "meldungen":
          include "inc/modules/navigation/navigation-meldungen.inc";
          break;
      case "archiv":
          include "inc/modules/navigation/navigation-meldungen-archiv.inc";
          break;
      case "ueberuns":
          include "inc/modules/navigation/navigation-ueberuns.inc";
          break;
      case "sponsoren":
          include "inc/modules/navigation/navigation-ueberuns-sponsoren.inc";
          break;
      case "dasteam":
          include "inc/modules/navigation/navigation-ueberuns-dasteam.inc";
          break;
      case "aktivitaeten":
          include "inc/modules/navigation/navigation-ueberuns-aktivitaeten.inc";
          break;
  }
?>
