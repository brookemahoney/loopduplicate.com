Feature: Status
  To make sure the site's basic status is OK
  As an administrator
  I should be able to visit report pages and have no warnings or notices.

  Background:
    Given I am logged in as a user with the "administrator" role

  @api
  Scenario: The status report should contain no errors.
    When I am on "admin/reports/status"
    Then I should not see an "tr.error" element

  @api
  Scenario: There should be no available module updates.
    When I am on "admin/reports/updates/update"
    Then I should see "All of your projects are up to date."
