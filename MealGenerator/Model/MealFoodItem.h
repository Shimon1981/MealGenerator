//
//  MealFoodItem.h
//  MealGenerator
//
//  Created by Shimon Shvartsbroit on 5/14/13.
//  Copyright (c) 2013 Shimon Shvartsbroit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FoodItem;

@interface MealFoodItem : NSManagedObject

@property (nonatomic, retain) NSNumber * grams;
@property (nonatomic, retain) FoodItem *foodItem;

@end
