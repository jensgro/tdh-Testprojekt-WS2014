<?php
  $pagetitle= "Über uns - Sponsoren";

  $navigation = "sponsoren";

	$pageheadline ="Sponsoren";

	$contentincludes = array(
    'tables/tabelle-sponsoren-filter.inc',
    'tables/tabelle-sponsoren-2.inc',
    'tables/tabelle-sponsoren-pager.inc'
	);

	$sideincludes = array(
		'leer.inc'
	);

  $widecontent = array(
  	'tables/tabelle-sponsoren-1.inc'
  );

	include 'inc/templates/template-3-0.inc';
?>
