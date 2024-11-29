/*
 *  Copyright 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Foundation/Foundation.h>

#import "RTCVideoDecoderFactory.h"
#import "sdk/objc/base/RTCMacros.h"

NS_ASSUME_NONNULL_BEGIN

/** This decoder factory include support for all codecs bundled with WebRTC. If using custom
 *  codecs, create custom implementations of RTCVideoEncoderFactory and
 *  RTCVideoDecoderFactory.
 */
RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE (RTCDefaultVideoDecoderFactory) : NSObject <RTC_OBJC_TYPE(RTCVideoDecoderFactory)>
@end

NS_ASSUME_NONNULL_END
