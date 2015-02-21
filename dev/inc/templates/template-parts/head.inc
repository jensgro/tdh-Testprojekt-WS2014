<!doctype html>
<!--[if lte IE 8]>      <html class="oldie"  lang="de"> <![endif]-->
<html lang="de">
<head>
	<meta charset="utf-8">
	<title><?php if (isset($pagetitle)) {echo $pagetitle;} else { echo "Platzhalter für einen Seitentitel";} ?></title>

	<script>document.documentElement.className += " js";</script>

	<meta name="description" content="">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">

	<!-- Hier müssten noch viel mehr Favicons hin -->
  <link rel="icon" href="favicon.ico">

	<!-- Das Stylesheet importiert viele kleine und müsste in der Liveumgebung zusammengefasst sein. -->
	<link rel="stylesheet" href="css/styles.css">

	<!-- Der alte IE benötigt das JS, um die neuen HTML5-Elemente zu kennen. -->
	<!--[if lte IE 8]>
    	<script src="js/html5shiv-printshiv.js" type="text/javascript"></script>
	<![endif]-->
</head>

<body>
	<!--[if lt IE 8]>
	  <p class="browsehappy">Sie surfen mit einem sehr antiken und unsicheren Browser. Deshalb kümmern wir uns nicht mehr um die korrekte Anzeige dieser Webseite auf einer solchen Software. Installieren Sie bitte <a href="http://browsehappy.com/">einen modernen Browser</a>. Sie sichern damit Ihre Surferlebnisse und helfen dabei, das Internet voranzubringen.</p>
	<![endif]-->

	<!-- begin: skip link navigation -->
	<?php include 'inc/templates/template-parts/skiplinks.inc'; ?>
	<!-- end: skip link navigation -->
	<div class="ym-wrapper">
        <div class="ym-wbox">
