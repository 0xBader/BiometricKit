//
//     Generated by class-dump 3.4 (64 bit) (Debug version compiled Oct 18 2013 01:54:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIImage;

@interface BiometricKitEnrollProgressInfo : NSObject
{
    int _message;
    long long _progress;
    long long _currentPrimaryComponentID;
    UIImage *_captureImage;
    UIImage *_renderedImage;
    NSDictionary *_messageDetails;
}

@property(retain, nonatomic) NSDictionary *messageDetails; // @synthesize messageDetails=_messageDetails;
@property(nonatomic) int message; // @synthesize message=_message;
@property(retain, nonatomic) UIImage *renderedImage; // @synthesize renderedImage=_renderedImage;
@property(retain, nonatomic) UIImage *captureImage; // @synthesize captureImage=_captureImage;
@property(nonatomic) long long currentPrimaryComponentID; // @synthesize currentPrimaryComponentID=_currentPrimaryComponentID;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
- (void)dealloc;
- (id)init;

@end
