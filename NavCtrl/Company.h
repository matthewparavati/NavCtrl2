//
//  Company.h
//  NavCtrl
//
//  Created by Matthew Paravati on 12/8/15.
//  Copyright © 2015 Aditya Narayan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Product.h"

@interface Company : NSObject

@property (nonatomic, retain) NSString* name;
@property (nonatomic,strong) NSString * logo;
@property(nonatomic,strong) NSMutableArray *products;

@end