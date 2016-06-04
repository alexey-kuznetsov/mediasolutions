<div id="onepage-links-wrapper">
	<h2 class="element-invisible">Главное меню</h2>
	<ul id="onepage-links" class="menu">
    <?php foreach($links as $section => $link): ?>
      <li class="leaf"><?php print l($link['text'], $link['path'], $link['options']) ?></li>
    <?php endforeach;?>	
	</ul>
</div>
