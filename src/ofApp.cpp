#include "ofApp.h"

#include <zlib.h>
#include "base64.h"

//--------------------------------------------------------------
void ofApp::setup(){
    decodeDepthMap();
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    depthmapimage.draw(0,0);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}


void ofApp::decodeDepthMap() {
    
    //http://maps.google.com/cbk?output=xml&ll=40.7625000,-73.9741670&dm=1
    
    string depth_map_base64 = "eJztnHl4FOUdxxOSEMBwIxBiOAwChXAJAklms7OJggp4a8FW61UVBMRSFVPC2Nb6IIgHKpJ6ohERqD4qxZbsZArPQ9Gn1AMUDxTFqxWr1LbxftrumczOzvHOzPu-v9mZ3-cfOXZ33u_3881slgfpcmZeXqe8_C55CIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIgCIIggaCACOhTIrQh8-6fIRTGgT6EF3AoPpdnUJgG-iDAUFGfYyMoVAN9GEAou8-NDRRqgD4PEIzce3wDWvnB1M_YvVc3kC0_iP45yffcBHTtB80_V_lemoCB_UD5B5DvjQkYyg-SfzD70Aswsx8U_6DyQRdgbj8Y_qHdJ4FIbmU_CP6hvXfAPbq1ft_7h3aeAd_oBPZ97x_auBZ-yYns-9w_tG09OEUn1O9r_9Cq9eGRnNQ--oeAeXDUnwDasyGMc5PrR_8wMI1tQz_6hyJ2vG4xOlMPbcc--oejW4LOtAdgTz_6ByPtn-4AbOpH_2C0-6c5ALv60T8YHf7pDcC2fvQPhso_rQHY14_-wVD7pzQA9J8JtGJTMvxTGYAD_egfjG60B-BEv8f8D6L7ctCKTdH4dz0AR_rRPxiU_TvT7zX_dM8DrdgUrX93A3Co33P-qR4IWrEpWf5dDQD96wCt2Jws_y4G4FS_9_zTPBG0YXPQfxYB9-98AD7y7_BIBcXFxVm_5ml0_DseQOD9F8T9F2s2AG3YHPSfRdz_FCdPLGj3r94AtGFz0H8WTv3H6yzOJP3L3sUL_p1ejxEO_SfqLM4C_eekf_uHStSZ7b8YWLAFOeWfz3ac-U_Wif45-6e_hEFJ_zZfL1Un-gfzT2sGCf8xjrb1rFSd6B_av-sRtPs_2sYC0nXmqH86fwDoHf9uNqDy35_0Oe11on_P-He6AfRPXFXvzJ96z7-TDaj9Ew6go0707zn_dieQ0m_Dv6pOX_gPkVaVK_5tTSDDP9EAVHUGyn_vHPJPfhnb_tV15px_vQ-APvVPeCG7_jPaDJL_3jnnn-hamf77Wj4-o03073H_1lez43_gwIGZbfrCP-EHgBz1b3U9jX_TAQTZf2Fv7QByxb_5FdG_V_1Tkm9xTa3_-ACMRuBn_xW-9m98VfSf8m8xgFz3b3TZLP99Df1PCrD_QvTvd_-m_0Ak-s8r9bt_kwEUBt1_QWmpv_3nVQTX_5RC9B_3bzyAQvQfBP9GA4j3F2j_Begf_QfAv8EA4v2hf_Qf--Ewf_kfpOf_2GMD619_APH-kv6H-dT_0ab-Z_jMv95fAK1IPQL9x_zXon_0H0z_egOI9-dj_4Xpt38D_xPQP_pH_wHyn_mgCQXoH_37wr_xvwBYkX7EGYHyn_pdEv-dg-Hf4AZAyz-pfjD_42vRv__8G1xEz3_fgPkPoX-V__HoH_1nPKYA_Reif_TP1z8l7xaXzf7rf-gf_aN_9K_C5_47o3_0b-m_MCj-89A_-kf_Rv6HqX-Nngjv-K9F_-hf6382-g-U_9PQP_pH__7xPzGbkTES_kdqmTx5cnl5edYvjxxZ3k6iKV_5r0g_JCVgWlUH8ZZi_quqctb_ZBXHdzDo-FmzZpXrk3zE4MGDDX4_xeAMANUSoed_WpwO_9OSjFMRbzDmv66ubmqKkwSHIoD8H2WbwYScGqPjWYBqidDzn1Dc4T_lPCb55BgnxRAEIeFfSHH66ZWVlQ5F5JB_4oce0wGgWiL0_M-cObOurt3_KTHiX-GVCU5oJ-Y_8V8xhUMR3YcMgfDfxzZWplNongXplgQ9_0nTFfHfruxg1HBzHIoYkqIfX__Z4nRRqba_mD41cbz9NqDnXyN2VJKxhgxN4FBETH2PfikM1BfFoWrfwe2f1LfJS0C71kPvfwAYZcLQDI5LU11d7dBEv0wSwgfEyE9TVETPf5cUJ8Zx499ctIYyNdDCNej5jyQYqsdxaqoTjE4zZswYt_67DkiSr4KS_y4usbeWbO8x2l8LWroKPf_hNGrZQ9PKR2cwJk73TBz579pVT757_51-0AEX_0bSs4BWn0DPf9K39itfZbw7EeT-Dd278d9JBxdboOM8Ra8OvOe_Ps4YLaPJpKtIfFtvqamrqXwn_uOt6sk334PVIEyM29qRSr3qINADSLu3LdlQfIIeSUz9m8pv10_iP_7wXvr9useWZDvqVZSUlAD6ZyA-RfwebyTNVD6hf-1zWIyAsfqk_STJEHz0x6zF_dPR3iMb1Tf3Bv5N3Fv57yhLB8ojoKDe9PU19jMqcG15xIgRXbVM17FlgqF2oydoPtj3a7-w-deuqX_dxkyfTm0F7Mxb2O-oIPlQa9t6rzEiSdYKiKeQNk7wUEPzKSze8c3C67Zm_SK93M-AlfkM_TYr6JmGrMr2GeivQLWH6dmL6E5BvG35ZuHtLSCBmxmwEU9g37QC2wNIQjaDDNx6d-JeFd6qPHv5HeyA0LsN7YT2O_zrluBwAUlM3xUs_RNad-5eFd66QEcFkN8SaH2x27afb3UPdLWANJZLyFJOMhqX7i2jZ5boqoAkvbRk-Kf2YcKWfesSqCwgExt3BlbqiaJnFkmxAC0UrWsObX1q6xIYLEALd_UJCP2zXwBF7xkHJjkxQQn2PwrYhbv6BMT-WS-AlvbMw5KdlqgE1gvgbT6JDf9sF0BDuvagpCclLIHtAnibT2LLP8sFuFWefUjyUxKXwHIB5t4ZXDCBPf1OyiXEhW_XBzT9AwANzBbA_mtdD9v-WS3AoW2Ds9k8nK27IIfPAtywefvX1EzzJPZdGx7L_rls1uCfBTj0z-AmYPsENI9kuwb2Hwf54Ng_9QU4OAG90zipwRcLcOHfdemZODsBpYM4q8EHC3DnvxPF7wQcn4DGCp3WkPNvA679U7sJgF7dRQ25vQD3-mlJgLquugaHReTuBCh8-dNSwf-KNIvI0QnQ868y4uwoji5F7eOn-yJy8lsBuv5deeFyEcZF5NwEqPuP40wP0xfnV0Ru3QaY-I9jXxOTF4UpIncmwMx_HHu6aL4WfBE5chtgqT9JCak5y1fgUQTdKjy_AaZf_moIVmDyrJyuwssj4OY_jckOsh_moyo8-nbA3b-W9BxiPwxCFV6bAbh_FQGromdPD4wB_XuoCrjQcJlVAMTXqQKwDLjQYJHVAMTX6yJI_sEjq-Ef32NlBDCyGv7xPVZGACOr4R_fY2UEMLIa_vE9VgZYZLDEGfCPr1sGXB1giaECZ8I9vtfqCFzgTLjH91odgQucCff4XqsjcIEz4R7fa3VABYbKq4F7fIM6wAqBygsUVwvv-J4rJGBxtfCO77lCAhZXC-_4niskYHG18I7vuUKA4gKlzYJ3fMNCoCoBSgsTNhvO8fVA_4Bwjq8H-geEc3w9gugfJqsOnOPrAfsNAExWkKh68I2vD_qHg298fdA_HHzj6xM8_yBJdeEbXx_QbwBAkkIE1YdrfCPQPxhc4xsRNP8QOQ3gGt8IyDcAiJwAMY3gGd8Y9A8Fz_jGoH8oeMY3Jhj-PajfI_4BqwlESGM4xjcjSP75ZzSBY3wz4D4B8M_IPaIZ_OKbg_5h4BffnOD4557QFH7xLYAagO8DmsMtvhVB8c87nwXc4lsB9R0g73yc41nBK741wfDPOZ0lvOJbA3QD4JyObzhrOMUnIQj--WYjgFN8EmBuAHyzcY1GAp_4ZPjfP9dkRPCJTwjEAHwbjAwu8Unxq3_v6veWf4iiOMbimIoYHvFtwH8AvgxFDof4dvCjfy_r95p__mX5L5EtmMe3C--6_JbHJqzj24dzYf5KYxvG8Z3AtzI_ZXEA2_jO4Fqaf5I4gml8p_CszS85HMIyvnM4FuePFI5hGN8N_KpjnoF9BDewi--OIl4LYB2A9fldwiq-ezgVmNOHdw-b-HTgUiLLkzM9OB2YxKcFjzcBdsdmeGh6MIhPE_YLYHViZgemC-349GFcaE4dlj5047OBaam5ck5GUIzPEnbVUj4h_QOyhVZ89jD6VoDm0eiejAs04vODQdGUjkTxRFyhYYUvlO8D7g9C5xxA0PPCF2rlu7g4hfrBoe2FLxTuBfavRq98D8BMDV-cD4HshRk07wm4yOGMvS2onsO4ay8Ca4ozRUU608iHK98DQCvxANAKQIEu3wNAKwAFunwPAK0AFOjyvQC0A0Cgq_cE0BIAga7eI0BrAAK6dg8BrQIA6Mo9DLQaRkDX6knyNJxQ2VbT0nhpqFOTpPxQqhYPl5VVjDjx56ELV0nK8HOqxIUHpfB3R16Kfrv1oeg1hxsikb9Lyi077xG-ObBeaPl8WeTqw2sr7n0tv7b_kUbloaeniPIeKfz61u7yZx_fH93wwNmRFYMGhTo1S-FXtw6U99w5oO7w83fVvFVyR6joAknJ-2GteNZeQTh-76khcbOkhJfWikfym0K7h0rKkPyeoSUv749Erl8pfHX3PaG7ZkiKcEVEPPjBjpofzT-4fed_JWVqj1Hinv7l8svVG4STd0rK5RddJj7yh43RGz7tE_p0t6Ts-MlM8eS212u-WlgUveJ7SVk95Qxx-Moj0yL9Pg9trl-uXHDsXHH1DklZ9v3Q0Jbr7hOKep0dWTqnq3BO9I7Qq3MlZf7hkDgv1sOcn14ZumrQWuH12bdGjsxpEj5burJVnnedMnxqm3jRk9OV0oXDwsqbn7Zc1OO0utn_lJS5C7oLo3c1C99ce0lk8YX_qJk-bktoen9J-fqBkeIvv5wQrnxmWvhvfz9Ovu2a6-teybsufPQ7t9b-_sR_R8f3HlJ3-xeSsql8Rcu8324UHvv84sile-bVND09u3b37gblq01N4nk_6iu0REprK8salf377hPPfXKR8M7TM0Jlsf42P9tdHDturtDnGSk0r0FSRjeMExd-dH305rUDW1uOaVSOuvwtMbRimLz2yu3RrtHY48s2i289IymhyVNDQ_7aJLw_ZljdrH9Jymt3tlU_u2eD8OtrJ0QO_UYKP7d0kdzzsXuilf9ZG_l--JSaTY_fX9X6P0nZtusGcc4fr5DzL9_dsu8eSXn21jVi072nC_N29atZ862kfHnWAvFAQxehb3230MVvSIo4vSW8-ZU7W65Zvzf61CeSsu7AVvH96P01zy_5Ulh7SFJK9paK4e8myvuabxQKtkvKodmLxHP2HyP3yB8rz4-9_tdbnhNnHVcSXbOitFUZ2KiMPW1NpGh_c81rDxbLoQOS0uPhneJnC28Q1n3ymfyYsFyZdubDkcVty-XqOVK4ubKX_HZ5pL7sn1K4ZXHf6Hsbm6MvPN4UqbiyVNiwvqR2yB2NytsTiiPr_nCLcOPGaaHSrZJSNadA_O7BxvCay7q1zn-uITpi-lax06YlwoLfrQ0Nju1x019-LBbdWh1dvaxTdMs3kvLd7feKk_6yINz05o7aC4d0lifdtU28UXwx-tKf-rZOCjUqoXUbIoXvjRW2VZfIH74mKSee9LF48Mm6ms0TClvnHGhUNnbfHbn0lCq5Z_2g1qqXlym7PxkeUb5cKVSd_2h0ZayvHdseDHdeujv63q761vMm_UK57d3WSGPbVcqeg7taV3cuDp16dbOY_7NF4S3r_li7Mlwohx44t-6EM6bIv68b1XpB_TLllodmRN6Qj2l55_E8ueFdSVm1c6-4aNWvo7-c_nDraaVLlANnb4n0ur5Uboh1_uF6SRl5alFkmTBenjZ_SajXGbGfr_o-PPXQSmH7sfXy6C2x-8C-yeGTF5TJz__trmj5nyWl6-Jt4qrFnwjrDz7XuvGlReE79l0s_urj5eEJl2yXt85fFZ249s9i84ZC-dCIm6IDYvnPjz4lvj9jYvRwl7D8RqzvwxMHRNoOrRb6D3-05sdtktJ2383hCRc8Ej3-_vta5-5fopz_1eQ65aabhJk3Py-88IGkvFC_JqxsXB6uXvWi3HD6iug4RRFr8keGr5Uj4S--GCnffFSf-uYnNkTL_i1FFx-WlMvOfkr8xfiByri7ZytPdB4d-ujRXXX_BzyWROU";
    
    
    vector<unsigned char> depth_map_compressed(depth_map_base64.length());
    int compressed_length = decode_base64(&depth_map_compressed[0], &depth_map_base64[0]);
    
    //Uncompress data with zlib
    //TODO: decompress in a loop so we can accept any size
    unsigned long length = 512 * 256 + 5000;
    vector<unsigned char> depth_map(length);
    int zlib_return = uncompress(&depth_map[0], &length, &depth_map_compressed[0], compressed_length);
    if (zlib_return != Z_OK) {
        cout<<"unable to decompress depthmap"<<endl;
        return;
    }
    
    //Load standard data
    int headersize = depth_map[0];
    int numberofplanes = depth_map[1] | (depth_map[2] << 8);
    int mapwidth = depth_map[3] | (depth_map[4] << 8);
    int mapheight = depth_map[5] | (depth_map[6] << 8);
    int offset = depth_map[7];
    
    if (headersize != 8 || offset != 8) {
        cout<<"Unexpected depth map header "<<endl;
        return;
    }
    
    //cout << "********************" << endl;
    //cout << "number of planes: " << numberofplanes << endl;
    //cout << "map width: " << mapwidth << endl;
    //cout << "map width: " << mapheight << endl;
    //cout << "offset: " << offset << endl;
    //cout << "********************" << endl;
    
    //the values in this vector correspondent to a planeId this pixel belongs to
    //depthMapIndices
    vector <unsigned char> depthmapIndices = vector<unsigned char>(mapheight * mapwidth);
    memcpy(&depthmapIndices[0], &depth_map[offset], mapheight * mapwidth);
    
    /*for (int x = 0; x < mapwidth; x++) {
     for(int y = 0; y < mapheight; y++){
     int planeId = depthmapIndices[y * mapwidth + x];
     cout<<planeId<<endl;
     }
     }*/
    
    //depthMapPlanes
    vector<DepthMapPlane> depthmapPlanes = vector<DepthMapPlane>(numberofplanes);
    memcpy(&depthmapPlanes[0], &depth_map[offset + mapheight * mapwidth], numberofplanes * sizeof(struct DepthMapPlane));
    
    constructDeptMap(mapwidth, mapheight, depthmapIndices, depthmapPlanes);
   
    
    
}

void ofApp::constructDeptMap(int width, int height, vector <unsigned char> depthmapIndices, vector<DepthMapPlane> depthmapPlanes) {
    
    vector<float> depthmap;
    depthmap.clear();
    depthmap.resize(width*height);
    
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            
            float xnormalize = (width-x-1.0f)/(width-1.0f);
            float ynormalize =(height-y-1.0f)/(height-1.0f);
            
            float theta = xnormalize * (2 * PI) + (PI / 2);
            float phi = ynormalize * PI;
            
            //convert from spherical to cartesian coordinates
            vector<float> v;
            v.resize(3);
            v[0] = sin(phi) * cos(theta);
            v[1] = sin(phi) * sin(theta);
            v[2] = cos(phi);

            int planeIdx = depthmapIndices[y*width + x];
            
            if (planeIdx > 0) {
                DepthMapPlane plane = depthmapPlanes[planeIdx];
                float t = abs(plane.d / (v[0] * plane.x + v[1] * plane.y + v[2] * plane.z));
                depthmap[y*width + (width - x - 1)] = t;
            }
            else {
                depthmap[y*width + (width - x - 1)] = 0.0f;
            }
        }
    }
    
    ofPixels depthPixels;
    depthPixels.allocate(width, height, 1);
    
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            float c = depthmap[y*width + x] / 100 * 255;
            depthPixels[y*width + x] = c;
        }
    }
    
    depthmapimage.setFromPixels(depthPixels);
    
}

