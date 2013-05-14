//
//  Meal.h
//  MealGenerator
//
//  Created by Shimon Shvartsbroit on 5/14/13.
//  Copyright (c) 2013 Shimon Shvartsbroit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Meal : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSData * picture;
@property (nonatomic, retain) NSSet *foodItems;
@end

@interface Meal (CoreDataGeneratedAccessors)

- (void)addFoodItemsObject:(NSManagedObject *)value;
- (void)removeFoodItemsObject:(NSManagedObject *)value;
- (void)addFoodItems:(NSSet *)values;
- (void)removeFoodItems:(NSSet *)values;

@end
