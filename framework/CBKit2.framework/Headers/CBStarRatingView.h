//
//  CBStarRatingView.h
//  CBKit
//
//  Created by 陈 on 2019/1/13.
//  Copyright © 2019年 None. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CBStarRatingViewCountingType) {
    
    /**
     0 1 2 3 4 5
     */
    CBStarRatingViewCountingTypeInteger,
    /**
     0.1 0.2 0.3 ... 1 1.1 ... 4.9 5
     */
    CBStarRatingViewCountingTypeFloat,
    /**
     0.5 1 1.5 2 2.5 3 3.5 ...
     */
    CBStarRatingViewCountingTypeHalfCutting,
};

typedef void(^CBStarRatingViewProgressDidChanedByUser)(CGFloat progress);

@interface CBStarRatingView : UIView

///=============================================================================
/// @name Configuring UI style
///=============================================================================
IB_DESIGNABLE

/**
 Default is CBStarRatingViewCountingTypeInteger .
 
 * CBStarRatingViewCountingTypeInteger [0, 1, 2, 3, 4, 5]
 * CBStarRatingViewCountingTypeFloat [0, 0.1, ... 0.4, ... 1, 1.1, ... 4.9, 5]
 * CBStarRatingViewCountingTypeHalfCutting [0, 0.5, 1, 1.5, 2, ...]
 */
@property(nonatomic, assign) CBStarRatingViewCountingType type;

/**
 Default is 5.0 .
 */
@property(nonatomic, assign) IBInspectable CGFloat starMargin;

/**
 Default is Red(255, 0, 0) .
 */
@property(nullable, nonatomic, strong) IBInspectable UIColor * starColor;

/**
 Default is nil .
 */
@property(nullable, nonatomic, strong) IBInspectable UIColor * starBorderColor;

/**
 Default is 0 .
 */
@property(nonatomic, assign) IBInspectable CGFloat starBorderWidth;

/**
 Default is Light gray .
 */
@property(nullable, nonatomic, strong) IBInspectable UIColor * starPlaceHolderColor;

/**
 Default is nil .
 */
@property(nullable, nonatomic, strong) IBInspectable UIColor * starPlaceHolderBorderColor;

/**
 Default is 0 .
 */
@property(nonatomic, assign) IBInspectable CGFloat starPlaceHolderBorderWidth;

///=============================================================================
/// @name Main attribute
///=============================================================================

/**
 Default 3. this value pinned to [0, 5].
 */
@property(nonatomic, assign) CGFloat progress;

/**
 Default is YES. if NO, ignores touch events.
 */
@property(nonatomic, assign) BOOL enabled;


/**
 Designated initializer.
 */
-(nonnull instancetype) init NS_DESIGNATED_INITIALIZER;
-(nonnull instancetype) initWithFrame:(CGRect)frame NS_DESIGNATED_INITIALIZER;
-(nonnull instancetype) initWithCoder:(nullable NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;


///=============================================================================
/// @name Call back
///=============================================================================

@property(nonatomic, copy) CBStarRatingViewProgressDidChanedByUser _Nullable progressDidChangedByUser;

@end


NS_ASSUME_NONNULL_END
