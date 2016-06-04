<div id="section-<?php print $name; ?>" class="onepage-section section">
  <div class="container">
      <div class="main">
			    <div class="section-title">
			      <h2><?php print $section['title']; ?></h2>
			    </div>
			    
			    <div class="section-content">
			      <?php if (is_array($section['content'])){
				  print drupal_render($section['content']);} else { print $section['content'];} ?>
			    </div>        
      </div>
  </div>
</div>
<hr>