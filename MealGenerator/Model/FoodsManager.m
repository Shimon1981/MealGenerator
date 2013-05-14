//
//  FoodsManager.m
//  MealGenerator
//
//  Created by Shimon Shvartsbroit on 5/14/13.
//  Copyright (c) 2013 Shimon Shvartsbroit. All rights reserved.
//

#import "FoodsManager.h"

@implementation FoodsManager

+(FoodsManager *)instance
{
    static FoodsManager* fm = nil;
    
    if (fm == nil)
    {
        fm = [[FoodsManager alloc] init];
    }
    
    return fm;
}
@end
