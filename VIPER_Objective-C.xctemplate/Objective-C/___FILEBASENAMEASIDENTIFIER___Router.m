//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright © ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

 
#import "___VARIABLE_viperModuleName___Router.h"
#import "___VARIABLE_viperModuleName___ViewController.h"
#import "___VARIABLE_viperModuleName___Interactor.h"
#import "___VARIABLE_viperModuleName___Presenter.h"
 

@implementation ___VARIABLE_viperModuleName___Router
@synthesize viewController = _viewController;
@synthesize navigationController = _navigationController;

- (instancetype)initWithViewController:(UIViewController *)viewController
				  navigationController:(nullable UINavigationController *)navigationController
{
	self = [super init];
	if (self)
	{
		_viewController = viewController;
		_navigationController = navigationController;
	}
	return self;
}

@end
