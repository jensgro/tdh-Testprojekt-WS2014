<?php
  $pagetitle= "Das Team - terre des hommes Murgtal/Mittelbaden";

	$navigation = "dasteam";

	$contentleftincludes = array(

    	'tables/tabelle-mitarbeiter-bild.inc'
	);
  
	$contentrightincludes = array(
    'tables/tabelle-mitarbeiter-text.inc',
    'tables/tabelle-mitarbeiter.inc'
	);

	$sideincludes = array(
		'spendenbuttons.inc'
	);

	include 'inc/templates/template-1-2.inc';
?>
