<?php
	$pagetitle= "Willkommen bei terre des hommes Murgtal/Mittelbaden";
	$pageheadline ="Hier kommt eine tolle Headline hin!";

	$navigation = "standard";

	// leer.inc ist nur ein Platzhalter, der gelöscht werden muss.
	$contentleftincludes = array(
	   'content-widget/home.inc',
	   "thanks.inc"
	);

	$contentrightincludes = array(
	   'leer.inc',
	   'leer.inc'
	);

  $sideincludes = array(
	   'spendenbuttons.inc',
	   'ansprechpartner_presse.inc',
	   'ansprechpartner_projekt.inc',
	   'ansprechpartner_sponsoring.inc'
	);

	// Auf manchen Seiten wird dieses Array benötigt.
	// $topcontent = array(
	// 	'leer.inc'
	// );

	// Auf manchen Seiten wird dieses Array benötigt.
	// $artikelincludes = array(
	// 			'leer.inc'
	// );

	// Auf manchen Seiten wird dieses Array benötigt.
	 $widecontent = array(
	 			'sponsorenliste.inc'
	 );

	include 'inc/templates/template-1-2.inc';
?>
