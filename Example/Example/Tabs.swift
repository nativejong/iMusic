//
//  Tabs.swift
//  Example
//
//  Created by John Blaine on 11/24/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit

class Tabs: UITabBarController, UITabBarControllerDelegate{

    override func viewDidLoad() {
        super.viewDidLoad()

        let music = MusicNavigationController()
//        self.addChild(music)
        
        let video = VideoNavigationController()
//        self.addChild(video)
        
        self.viewControllers = [music, video]
    }
    
    
    override func tabBar(_ tabBar: UITabBar, didSelect item: UITabBarItem) {
        print("tabBar")
    }
    

}
