//
//  DPSAddShopViewController.h
//  Diaper Scout
//
//  Created by Simon Porter on 17/06/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#define METERS_PER_MILE 1609.344

@interface DPSAddShopViewController : UIViewController
@property (weak, nonatomic) IBOutlet MKMapView *_mapView;

- (IBAction)cancel:(id)sender;

@end
