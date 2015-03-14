Feature: Basic Browsing
  To make sure the site's basic functionality is working
  As any user
  I should be able to browse around and see particular text

  Background:
    Given I am on the homepage

  Scenario: Some common links and text should exist
    Then I should see the link "LoopDuplicate"
    And I should see the link "Fork Me"

  @javascript
  Scenario: Javascript should add particular elements to the DOM
    Then I should see text matching "Show/Hide Filters"
