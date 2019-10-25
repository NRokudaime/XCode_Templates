//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright © ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//


@import Foundation;

@class ___VARIABLE_viperModuleName___ViewController;
@class UIViewController;
@class UINavigationController;


#pragma mark - RouterProtocol

/**
 Протокол управления переходами между экранами
 */
@protocol ___VARIABLE_viperModuleName___RouterProtocol <NSObject>

@property (nonatomic, nullable, weak) UIViewController *viewController; /**< Вью контроллер модуля */
@property (nonatomic, nullable, weak) UINavigationController *navigationController; /**< Навигационный контроллер модуля */

@end


#pragma mark - PresenterProtocol

/**
 Протокол подготовки данных для отображения на экране
 */
@protocol ___VARIABLE_viperModuleName___PresenterProtocol <NSObject>

/**
 Сообщение презентационному слою, что представление было загружено
 */
- (void)didLoadView;

@end


#pragma mark - InteractorProtocol

/**
 Протокол общения бизнес логики с презентационным слоем
 */
@protocol ___VARIABLE_viperModuleName___InteractorOutputProtocol <NSObject>

/** Interactor -> Presenter */

@end

/**
 Протокол общения презентационного слоя с бизнес логикой
 */
@protocol ___VARIABLE_viperModuleName___InteractorInputProtocol <NSObject>

@property (nonatomic, weak, nullable) id<___VARIABLE_viperModuleName___InteractorOutputProtocol> presenter; /**< Презентационный слой */

/** Presenter -> Interactor */

@end


#pragma mark - ViewProtocol

/**
 Протокол общения презентационного слова с представлением модуля
 */
@protocol ___VARIABLE_viperModuleName___ViewProtocol <NSObject>

/** Presenter -> ViewController */

@end

