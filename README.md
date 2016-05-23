# ASU Intranet Page

This Drupal 7 module provides an ASU Intranet Page content type that can be restricted to CAS/ASURITE users by department, employee type, or both.

## Dependencies
This module works best with [ASU's Webspark](https://github.com/ASU/webspark-drops-drupal7) which contains panopoly core. It also requires the [ASU Department Picker Field](https://github.com/ASU-CLAS/asu-dept-picker).

## Installing
Extract the files into your `sites/all/modules` folder and enable the `ASU Intranet Page` module at `admin/modules`.

## Configuring
Once installed you can configure the module at `admin/config/content/asu_intranet_page`. A link to this configuration page was placed in the `Content Authoring` labeled `ASU Intranet Page Settings`.

###Configuration Options

****You may select a department, employee type, or both.****

####Departments
Select one or more departments to restrict access to the intranet pages.

* Specifying a `department` without an `employee type` to grant access to users that belong to a department.
* You can select all the `sub-departments` from a `department` when selecting by specifying that you want to include them.
* You can add multiple `departments`.


----------


####Employee Types
Select one or more employee types to restrict access to the intranet pages.

* Specifying an `employee type` without a `department` to grant access to anyone that has that `employee type` affiliation in a different department.



## How It Works
When a user logs in, the module will check and see if this user is a member of the `department(s)` and/or `employee type(s)` that were configured. When viewing an `asu_intranet_page` and they are not members, access will be denied.


### Note
When a department and employee type have been specified, a user `MUST` belong to the `department` specified `AND` be one of the `employee types` in that **same department**. 

