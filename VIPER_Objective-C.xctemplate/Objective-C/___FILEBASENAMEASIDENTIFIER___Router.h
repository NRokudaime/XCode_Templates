//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright © ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//


@import Foundation;

#import "___VARIABLE_viperModuleName___Protocols.h"
#import "___VARIABLE_viperModuleName___ViewController.h"


NS_ASSUME_NONNULL_BEGIN


/**
 Роутер модуля ___VARIABLE_viperModuleName___
 */
@interface ___VARIABLE_viperModuleName___Router : NSObject <___VARIABLE_viperModuleName___RouterProtocol>

/**
 Конструктор
 @param viewController Основной вью контроллер модуля
 @param navigationController Навигационный контроллер, с которого следует выполнять навигацию
 @return инстанс роутера
 */
- (instancetype)initWithViewController:(UIViewController *)viewController
				  navigationController:(nullable UINavigationController *)navigationController NS_DESIGNATED_INITIALIZER;

/** Запрет дефолтных конструкторов */
- (nullable instancetype)init NS_UNAVAILABLE;
+ (nullable instancetype)new NS_UNAVAILABLE;

@end


NS_ASSUME_NONNULL_END

