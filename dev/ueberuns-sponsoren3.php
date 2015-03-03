<?php
  $pagetitle= "Über uns - Sponsoren";

  $navigation = "sponsoren";

	$pageheadline ="Sponsoren";

	$contentleftincludes = array(
    'leer.inc'
	);

	$contentrightincludes = array(
    'tables/tabelle-sponsoren-filter.inc',
    'tables/tabelle-sponsoren-3.inc',
    'tables/tabelle-sponsoren-pager.inc'
	);

	$sideincludes = array(
		'leer.inc'
	);

  $widecontent = array(
  	'leer.inc'
  );
  
	include 'inc/templates/template-1-2.inc';
?>
