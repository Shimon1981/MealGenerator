//
//  Database.h
//  MealGenerator
//
//  Created by Shimon Shvartsbroit on 5/14/13.
//  Copyright (c) 2013 Shimon Shvartsbroit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Database : NSManagedObject

@property (nonatomic, retain) NSSet *meals;
@property (nonatomic, retain) NSSet *foodItems;
@end

@interface Database (CoreDataGeneratedAccessors)

- (void)addMealsObject:(NSManagedObject *)value;
- (void)removeMealsObject:(NSManagedObject *)value;
- (void)addMeals:(NSSet *)values;
- (void)removeMeals:(NSSet *)values;

- (void)addFoodItemsObject:(NSManagedObject *)value;
- (void)removeFoodItemsObject:(NSManagedObject *)value;
- (void)addFoodItems:(NSSet *)values;
- (void)removeFoodItems:(NSSet *)values;

@end
