Feature: Anonymous Users
  To make sure the majority of users have a good experience
  As an anonymous user
  I should be able to browse around and user particular features

  Background:
    Given I am on the homepage

  @javascript
  Scenario: Various features are working
    Then I should see the link "LoopDuplicate"
    And I should see text matching "Show/Hide Filters"
