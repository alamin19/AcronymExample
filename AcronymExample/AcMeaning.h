//
//  AcMeaning.h
//  AcronymExample
//
//  Created by Saddam Al Amin on 4/27/17.
//  Copyright © 2017 Saddam Al Amin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AcMeaning : NSObject

@property (nonatomic, copy) NSString *meaning;
@property NSInteger frequency;
@property NSInteger since;
@property (nonatomic, copy) NSMutableArray *variations;

@end
