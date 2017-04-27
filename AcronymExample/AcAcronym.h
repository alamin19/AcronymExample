//
//  AcAcronym.h
//  AcronymExample
//
//  Created by Saddam Al Amin on 4/27/17.
//  Copyright © 2017 Saddam Al Amin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AcAcronym : NSObject

@property (nonatomic,copy) NSString *shortForm;
@property (nonatomic,strong) NSMutableArray *meanings;

@end
