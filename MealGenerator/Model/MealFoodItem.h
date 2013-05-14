//
//  MealFoodItem.h
//  MealGenerator
//
//  Created by Shimon Shvartsbroit on 5/14/13.
//  Copyright (c) 2013 Shimon Shvartsbroit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "FoodItem.h"


@interface MealFoodItem : FoodItem

@property (nonatomic, retain) NSNumber * grams;

@end
