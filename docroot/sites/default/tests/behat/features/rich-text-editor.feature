Feature: Rich text editor
  To be able to make content more easily
  As an administrator
  I should be able to use CKEditor.

  Background:
    Given I am logged in as a user with the "administrator" role

  @api @javascript
  Scenario: A rich text editor should exist.
    When I am on "node/add"
    Then I should see the link "Enable rich-text"
