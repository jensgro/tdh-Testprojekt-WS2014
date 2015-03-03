<?php
  $pagetitle= "Über uns - Sponsoren";

  $navigation = "sponsoren";

	$pageheadline ="Sponsoren";

	$contentleftincludes = array(
    'leer.inc'
	);

	$contentrightincludes = array(
    'tables/tabelle-sponsoren-1-filter.inc',
    'tables/tabelle-sponsoren-1.inc',
    'tables/tabelle-sponsoren-1-pager.inc'
	);

	$sideincludes = array(
		'leer.inc'
	);

  $widecontent = array(
  	'leer.inc'
  );

	include 'inc/templates/template-1-2.inc';
?>
