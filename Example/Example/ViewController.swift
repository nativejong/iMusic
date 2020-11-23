//
//  ViewController.swift
//  Example
//
//  Created by John Blaine on 9/27/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
//import iLogin
//import iHome
//import iRating
//import iEasy
import iMusic

class ViewController: UIViewController {
    var login : iMusic?
//    var home : iHome?
//    var rating : iRating?
//    var easy : iEasy?

    var sView : UIScrollView?

    override func viewDidLoad() {
        super.viewDidLoad()
        sView = UIScrollView(frame: CGRect.zero)
        self.view.addSubview(sView!)

        login = iLogin(frame: CGRect.zero)
        sView?.addSubview(login!)

        
    }
    
    
    

        override func viewWillLayoutSubviews() {
            let w = self.view.frame.size.width;
            let h = self.view.frame.size.height;
            
            sView?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
            sView?.contentSize = CGSize(width: w * 1.0, height: h * 4.0)
            

            login?.frame = CGRect(x: w * 0.1, y: h * 1.5, width: w * 0.8, height: h * 0.3)
             
        }

}

