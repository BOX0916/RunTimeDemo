//
//  Person.h
//  RunTimeDemo
//
//  Created by 李文良 on 2018/2/27.
//  Copyright © 2018年 李文良. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModel.h"

@interface Person : BaseModel

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *age;

@end
