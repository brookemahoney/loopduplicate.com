<?php

use Drupal\DrupalExtension\Context\DrupalContext;
use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;

/**
 * Defines application features from the specific context.
 */
class LoopDrupalContext extends DrupalContext implements SnippetAcceptingContext {

  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through behat.yml.
   */
  public function __construct() {
  }

  /**
   * Determines if the a user is already logged in.
   *
   * RawDrupalContext::loggedIn() expects a log out link to be present on the
   * home page, but, a log out link doesn't exist for loopduplicate.com. So,
   * this override looks for the logged-in class on the body.
   *
   * @return boolean
   *   Returns TRUE if a user is logged in for this session.
   */
  public function loggedIn() {
    $session = $this->getSession();
    $session->visit($this->locatePath('/'));

    $element = $session->getPage()->find('css', 'body.logged-in');
    return is_null($element) ? FALSE : TRUE;
  }

}
