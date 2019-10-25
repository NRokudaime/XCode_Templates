//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright © ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//


#import "___VARIABLE_viperModuleName___Presenter.h"


@interface ___VARIABLE_viperModuleName___Presenter ()

@property (nonatomic, strong) id<___VARIABLE_viperModuleName___RouterProtocol> router;  /**< Роутер модуля */
@end



@implementation ___VARIABLE_viperModuleName___Presenter

- (instancetype)initWithInterface:(id<___VARIABLE_viperModuleName___ViewProtocol>)interface interactor:(id<___VARIABLE_viperModuleName___InteractorInputProtocol>)interactor router:(id<___VARIABLE_viperModuleName___RouterProtocol>)router
{
	self = [super init];
	if (self)
	{
		_view = interface;
		_interactor = interactor;
		_router = router;
		_interactor.presenter = self;
	}
	return self;
}


#pragma mark - ___VARIABLE_viperModuleName___PresenterProtocol

- (void)didLoadView
{
	
}


#pragma mark - ___VARIABLE_viperModuleName___InteractorOutputProtocol

@end
