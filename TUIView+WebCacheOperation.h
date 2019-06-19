//
//  TUIView+WebCacheOperation.h
//  twui
//
//  Created by vvveiii on 2019/6/11.
//  Copyright © 2019 lvv. All rights reserved.
//

#import <TwUI/TwUI.h>
#import <SDWebImage/SDWebImageCompat.h>
#import <SDWebImage/SDWebImageOperation.h>

@interface TUIView (WebCacheOperation)

/**
 *  Get the image load operation for key
 *
 *  @param key key for identifying the operations
 *  @return the image load operation
 */
- (nullable id<SDWebImageOperation>)sd_imageLoadOperationForKey:(nullable NSString *)key;

/**
 *  Set the image load operation (storage in a UIView based weak map table)
 *
 *  @param operation the operation
 *  @param key       key for storing the operation
 */
- (void)sd_setImageLoadOperation:(nullable id<SDWebImageOperation>)operation forKey:(nullable NSString *)key;

/**
 *  Cancel all operations for the current UIView and key
 *
 *  @param key key for identifying the operations
 */
- (void)sd_cancelImageLoadOperationWithKey:(nullable NSString *)key;

/**
 *  Just remove the operations corresponding to the current UIView and key without cancelling them
 *
 *  @param key key for identifying the operations
 */
- (void)sd_removeImageLoadOperationWithKey:(nullable NSString *)key;

@end
