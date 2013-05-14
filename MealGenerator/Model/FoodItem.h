//
//  FoodItem.h
//  MealGenerator
//
//  Created by Shimon Shvartsbroit on 5/14/13.
//  Copyright (c) 2013 Shimon Shvartsbroit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface FoodItem : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSData * picture;
@property (nonatomic, retain) NSNumber * calories;
@property (nonatomic, retain) NSNumber * fatGrams;
@property (nonatomic, retain) NSNumber * carbsGrams;
@property (nonatomic, retain) NSNumber * proteinGrams;

@end
