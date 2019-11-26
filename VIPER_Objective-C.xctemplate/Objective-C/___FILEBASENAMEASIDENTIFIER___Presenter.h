//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright © ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//


#import "___VARIABLE_viperModuleName___Protocols.h"


NS_ASSUME_NONNULL_BEGIN

/**
 Презентационный слой модуля ___VARIABLE_viperModuleName___
 */
@interface ___VARIABLE_viperModuleName___Presenter : NSObject<___VARIABLE_viperModuleName___InteractorOutputProtocol, ___VARIABLE_viperModuleName___PresenterProtocol>

@property (nonatomic, nullable, weak) id<___VARIABLE_viperModuleName___ViewProtocol> view; /**< Представление модуля */
@property (nonatomic, strong) id<___VARIABLE_viperModuleName___InteractorInputProtocol> interactor; /**< Бизнес логика модуля */

/**
 Конструктор
 @param interface интерфейс общения с представлением
 @param interactor Интерактор модуля
 @param router Роутер модуля
 @return Презентационный слой модуля
 */
- (instancetype)initWithInterface:(id<___VARIABLE_viperModuleName___ViewProtocol>)interface interactor:(id<___VARIABLE_viperModuleName___InteractorInputProtocol>)interactor router:(id<___VARIABLE_viperModuleName___RouterProtocol>)router NS_DESIGNATED_INITIALIZER;

/** Запрет дефолтных конструкторов */
- (nullable instancetype)init NS_UNAVAILABLE;
+ (nullable instancetype)new NS_UNAVAILABLE;

@end


NS_ASSUME_NONNULL_END
