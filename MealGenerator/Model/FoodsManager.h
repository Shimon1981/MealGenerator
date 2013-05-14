//
//  FoodsManager.h
//  MealGenerator
//
//  Created by Shimon Shvartsbroit on 5/14/13.
//  Copyright (c) 2013 Shimon Shvartsbroit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
/*
@class Meal;
@class MealFoodItem;
@class FoodItem;
*/
@interface FoodsManager : NSObject

// Singleton
+(FoodsManager*)instance;
/*
// Create methods
-(Meal*)createMealWithDate:(NSDate*)aDate andPicture:(NSData*)aPicture andFoodItems:(NSSet*)foodItems;

-(FoodItem*)createFoodItemWithName:(NSString*)aName andPicture:(NSData*)aPicture andCalories:(NSNumber*)calories andFat:(NSNumber*)fatGrams andCarbs:(NSNumber*)carbsGrams andProtein:(NSNumber*)proteinGrams;

-(MealFoodItem*) createMealFoodItemWithFoodItem:(FoodItem*)aFoodItem andWeight:(NSNumber*)grams;
*/


@end
