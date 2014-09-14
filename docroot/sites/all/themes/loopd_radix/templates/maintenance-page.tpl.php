<!DOCTYPE html>
<html>
  <head>
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>">

  <header id="header" class="header" role="header">
    <nav class="navbar navbar-default navbar-static-top" role="navigation">
      <div class="container">
        <div class="navbar-header">
          <a href="<?php print $front_page; ?>" id="logo" class="navbar-brand">
            <?php print $site_name; ?>
          </a>
        </div>
      </div>
    </nav>
  </header>

  <div id="main-wrapper">
    <div id="main" class="main container">
      <div class="row">
        <div class="col-md-12">
          <?php if ($title): ?>
            <h1 class="page-header"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print $content; ?>
        </div>
      </div>
    </div>
  </div>
  
  </body>
</html>
