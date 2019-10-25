//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright © ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//


#import "___VARIABLE_viperModuleName___Assembly.h"
#import "___VARIABLE_viperModuleName___Protocols.h"
#import "___VARIABLE_viperModuleName___ViewController.h"
#import "___VARIABLE_viperModuleName___Router.h"
#import "___VARIABLE_viperModuleName___Interactor.h"
#import "___VARIABLE_viperModuleName___Presenter.h"
@import SBUIKit;


@implementation ___VARIABLE_viperModuleName___Assembly

+ (UIViewController *)createModule
{
	___VARIABLE_viperModuleName___ViewController *viewController = [___VARIABLE_viperModuleName___ViewController new];
	___VARIABLE_viperModuleName___Interactor *interactor = [___VARIABLE_viperModuleName___Interactor new];
	___VARIABLE_viperModuleName___Router *router = [[___VARIABLE_viperModuleName___Router alloc] initWithViewController:viewController navigationController:[UINavigationController upperNavigationController]];
	___VARIABLE_viperModuleName___Presenter *presenter = [[___VARIABLE_viperModuleName___Presenter alloc] initWithInterface:viewController interactor:interactor router:router];
	viewController.presenter = presenter;
	return viewController;
}

@end
