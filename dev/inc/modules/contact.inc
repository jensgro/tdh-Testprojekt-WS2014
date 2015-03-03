<!--Kontakt Formular-->

<div class="contactform">
	<form method="post">	
		<header>
			<h2>Kontakt mit terre des hommes Murgtal</h2>
			<span class="sub">Schreiben Sie uns eine Nachricht - wir melden uns so schnell wie möglich bei Ihnen</span>
		</header>
		
		<label class="select-thema">Was ist Ihr Anliegen</label>
		<span class="sub">Wählen Sie bitte aus, worum es Ihnen geht - so finden wir schneller den richtigen Ansprechpartner.</span>
		<select>
			<option selected="selected" value="Allgemeines">Allgemeines</option>
			<option value="Allgemeines 2">Allgemeines 2</option>
			<option value="Spenden">Spenden</option>
			<option value="Sponsoren">Sponsoren</option>
			<option value="Other">Other</option>
		</select>
		
		<label class="name-label" required>Name*</label>
		<input class="name" type="text" placeholder="Ihr Name" value="" size="14">
		
		<label class="mail-label" required>Ihre E-Mail Addresse*</label>
		<input class="mail" type="text" placeholder="Ihre E-Mail Addresse" value="" size="14">
		
		<label class="message-label" required>Name*</label>
		<span class="sub">Hinterlassen Sie hier auch ihre Addresse oder Telefonnummer, wenn Sie möchten, dass wir telefonisch oder schriftlich mit Ihnen in Kontakt treten.</span>
		<textarea class="message" required rows="10" cols="50" tabindex="8" placeholder="Ihre Nachricht an tdh Murgtal"></textarea>
		
		<button class="send">Nachricht Senden</button>
	</form>
</div>