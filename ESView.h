//
//  ESView.h
//  Etch-A-Sketch
//
//  Created by Arek Bolton on 4/13/14.
//  Copyright (c) 2014 Arek Bolton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ESView : UIView

@property (nonatomic, weak) NSMutableArray *points;
@property (nonatomic) CGPoint currentPoint;

- (void) saveCurrentPoint;
//- (void) drawRect;

@end
