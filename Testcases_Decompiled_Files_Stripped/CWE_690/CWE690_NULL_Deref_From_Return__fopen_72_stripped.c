
void FUN_00102995(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ddd(param_2);
  uVar2 = FUN_00102ddd(param_1);
  FUN_00102c1f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b5a(param_3);
  FUN_00102e6e(param_1,param_2,uVar1);
  return;
}




void FUN_0010346b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034a0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103ccc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d5a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010244c(param_1);
  FUN_00102f95(uVar1);
  return;
}




undefined8 FUN_00102b5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d04(undefined8 param_1,undefined8 param_2)

{
  FUN_001025eb(param_1,param_2);
  return;
}




void FUN_001025eb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b31(param_1,param_2);
  return;
}




void FUN_00101e02(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_0010286e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102322(local_80);
      local_60 = FUN_001026fc(&local_88,&local_78);
      local_70 = FUN_0010295e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101cf2(local_80);
                    /* try { // try from 0010210c to 00102197 has its CatchHandler @ 0010224f */
      FUN_00102839(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101cf2(local_80);
      puVar2 = (undefined8 *)FUN_00101d54(&local_88);
      local_70 = FUN_00102995(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101cf2(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d54(&local_88);
      local_70 = FUN_00102995(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101cf2(local_80);
      FUN_00101d04(*local_80,local_80[1],uVar1);
      FUN_00101cb8(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010264a(local_38,param_1,param_4);
                    /* try { // try from 00101e8c to 0010205f has its CatchHandler @ 00102231 */
      local_50 = FUN_001026de(local_38);
      local_78 = FUN_001019f2(local_80);
      local_48 = FUN_001026fc(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101cf2(local_80);
        FUN_00102740(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_00102798(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d54(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_001027e8(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101cf2(local_80);
        lVar4 = FUN_00102839(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101cf2(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_00102740(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_001027e8(*puVar2,local_40,local_50);
      }
      FUN_001026aa(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010313b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102cd4(param_1);
  uVar1 = FUN_001032be(uVar1,param_2,param_3);
  FUN_00102f4e(&local_10,uVar1);
  return;
}




void FUN_001025aa(void)

{
  return;
}




void FUN_00102574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ad4(param_1,param_2,param_3);
  return;
}




void FUN_00103e50(void)

{
  return;
}




void FUN_00103abd(void)

{
  return;
}




undefined8 FUN_0010244c(undefined8 param_1)

{
  return param_1;
}




void FUN_001037cb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102638(undefined8 param_1)

{
  return param_1;
}




void FUN_00103da6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102c54(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e3d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103044(param_1,param_2,param_3);
  return;
}




void FUN_00101b36(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010244c(param_2);
  FUN_001023fb(&local_31,uVar1);
  uVar1 = FUN_001023d4(param_2);
                    /* try { // try from 00101b9c to 00101ba0 has its CatchHandler @ 00101c09 */
  FUN_0010245e(param_1,uVar1,&local_31);
  FUN_00101938(&local_31);
  uVar2 = FUN_00101cf2(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010251c(param_2);
  uVar4 = FUN_001024c4(param_2);
                    /* try { // try from 00101bea to 00101bee has its CatchHandler @ 00101c27 */
  uVar1 = FUN_00102574(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ba9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eb2(param_1,param_2);
  return;
}




void FUN_001019aa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cf2(param_1);
  FUN_00101d04(*param_1,param_1[1],uVar1);
  FUN_00101958(param_1);
  return;
}




void FUN_00103b36(void)

{
  return;
}




void FUN_0010190c(undefined8 param_1)

{
  FUN_00101c56(param_1);
  FUN_00101c76(param_1);
  return;
}




undefined8 FUN_00102f95(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103189(param_1);
  puVar1 = (undefined8 *)FUN_001031a7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103ac8(void)

{
  return;
}




undefined8 FUN_001024c4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102616(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_001032be(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103b6d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103503(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103578(param_1,2);
  fclose((FILE *)*puVar1);
  return;
}




void FUN_00102ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103094(param_1,param_2,param_3);
  return;
}




void FUN_00103b57(void)

{
  return;
}




ulong * FUN_00102d80(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




long FUN_001026fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d54(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d54(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102b0a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010353a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103578(param_1,2);
  if ((FILE *)*puVar1 != (FILE *)0x0) {
    fclose((FILE *)*puVar1);
  }
  return;
}




void FUN_00102b31(void)

{
  return;
}




undefined8 FUN_001031d6(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102c1f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ee4(param_1,param_2,param_3);
  return;
}




void FUN_0010245e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a44(param_1,param_3);
                    /* try { // try from 00102498 to 0010249c has its CatchHandler @ 0010249f */
  FUN_00102a7a(param_1,param_2);
  return;
}




undefined8 FUN_0010251c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102616(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_0010286e(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102d5a(param_1);
  lVar2 = FUN_001023d4(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023d4(local_40);
  local_30 = FUN_001023d4(local_40);
  plVar3 = (long *)FUN_00102d80(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023d4(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d5a(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d5a(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103a6f(void)

{
  return 1;
}




void FUN_00101958(long *param_1)

{
  FUN_00101cb8(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018ac(param_1);
  return;
}




undefined8 FUN_001029ed(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a1a(param_1,param_2);
  return param_1;
}




long FUN_001030c5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00101d66(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102616(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037a0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_00101dbd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102638(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102638(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101c56(undefined8 param_1)

{
  FUN_001025aa(param_1);
  return;
}




void FUN_00103672(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102322(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d32(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_001033f3(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f64(param_1,param_2,param_3);
  return;
}




void FUN_00102daf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ffe(param_1,param_2,0);
  return;
}




void FUN_00103b62(void)

{
  return;
}




undefined8 FUN_00101896(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bd3(param_2);
  uVar2 = FUN_00102bd3(param_1);
  FUN_00102c1f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010361c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103ba4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b6d,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00101938(undefined8 param_1)

{
  FUN_00101ca8(param_1);
  return;
}




undefined8 FUN_00102bd3(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ec6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b4c(void)

{
  return;
}




void FUN_00101d32(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103a7e(void)

{
  return 0;
}




undefined8 FUN_00103309(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102638(&local_10);
  return *puVar1;
}




void FUN_00103af4(void)

{
  return;
}




void FUN_001025b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b0a(param_1,param_2,param_3);
  return;
}




void FUN_00101c76(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




long FUN_00103578(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_0010264a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b5a(param_3);
  uVar2 = FUN_00102b44(param_1);
  FUN_00102b6c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102c66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102cd4(param_3);
  uVar2 = FUN_00102cd4(local_28);
  uVar3 = FUN_00102cd4(local_20);
  uVar1 = FUN_00102f19(uVar3,uVar2,uVar1);
  FUN_00102f4e(&local_30,uVar1);
  return;
}




void FUN_00102a44(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a1a(param_1,param_2);
  FUN_00101c76(param_1);
  return;
}




void FUN_00102839(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d24(param_1,param_2,param_3);
  return;
}




void FUN_0010326e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010335f(param_2);
  uVar2 = FUN_0010335f(param_1);
  FUN_00103385(uVar2,uVar1,param_3);
  return;
}




void FUN_00103de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined8 FUN_00102f4e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_001023d4(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00101cf2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010332a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033f3(param_1,param_2,param_3);
  return;
}




void FUN_00102ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e3d(param_1,param_2,param_3);
  return;
}




void FUN_00103ae9(void)

{
  return;
}




void FUN_001035f4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031ee(param_2);
  uVar2 = FUN_001031ee(param_1);
  FUN_00103200(uVar2,uVar1,param_3);
  return;
}




void FUN_0010371e(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ddd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ec6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010359c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c54(param_2);
  uVar2 = FUN_00102c54(param_1);
  FUN_00102c66(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001019f2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d32(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010236e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d32(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102b44(long param_1)

{
  return param_1 + 8;
}




int FUN_00103a8d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00103990(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_0010335f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103456(&local_10);
  FUN_00102c54(uVar1);
  return;
}




undefined8 FUN_00103456(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001035c2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103d68(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103b20(void)

{
  return;
}




undefined8 FUN_001031ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00102616(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103b41(void)

{
  return;
}




void FUN_001018ec(undefined8 param_1)

{
  FUN_001018cc(param_1);
  return;
}




void FUN_00102ec6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010369d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ad3(void)

{
  return;
}




void FUN_00102ffe(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031d6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00101695(void)

{
  long in_FS_OFFSET;
  FILE *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ec(local_58);
  local_68 = (FILE *)0x0;
                    /* try { // try from 001016d3 to 001017ab has its CatchHandler @ 001017f7 */
  local_68 = fopen("file.txt","w+");
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_68);
  FUN_00101b36(local_38,local_58);
                    /* try { // try from 001017b3 to 001017b7 has its CatchHandler @ 001017e2 */
  FUN_0010353a(local_38);
  FUN_001019aa(local_38);
  FUN_001019aa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a42(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d54(param_2);
  *param_1 = *puVar1;
  return;
}




bool FUN_00103c71(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




ulong FUN_0010388c(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b0a(void)

{
  return;
}




undefined8 FUN_00102cd4(undefined8 param_1)

{
  return param_1;
}




void FUN_001027e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cd4(param_2);
  uVar2 = FUN_00102cd4(param_1);
  FUN_00102ce6(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_001031a7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103cef(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00101821(void)

{
  FUN_00101695();
  return;
}




void FUN_00103200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102cd4(param_3);
  uVar2 = FUN_00103309(local_28);
  uVar3 = FUN_00103309(local_20);
  uVar1 = FUN_0010332a(uVar3,uVar2,uVar1);
  FUN_00102f4e(&local_30,uVar1);
  return;
}




void FUN_00102e2a(void)

{
  return;
}




void FUN_00103094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010326e(param_1,param_2,param_3);
  return;
}




void FUN_00101a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101d66(param_1);
  local_18 = FUN_00101dbd(&local_38,&local_20);
  local_20 = FUN_00102322(local_30);
  uVar1 = FUN_0010236e(&local_20,local_18);
  FUN_00101e02(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102322(local_30);
  FUN_0010236e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023fb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029ed(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001018cc(undefined8 param_1)

{
  FUN_0010190c(param_1);
  return;
}




void FUN_001026de(undefined8 param_1)

{
  FUN_00102b44(param_1);
  return;
}




void FUN_00103aa7(void)

{
  return;
}




void FUN_00103aff(void)

{
  return;
}




undefined8 FUN_0010295e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102daf(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103b2b(void)

{
  return;
}




undefined8 FUN_00101831(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010359c("Calling good()...");
  FUN_00101821();
  FUN_0010359c("Finished good()");
  FUN_0010359c("Calling bad()...");
  FUN_00101509();
  FUN_0010359c("Finished bad()");
  return 0;
}




void FUN_00103d87(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a7a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010295e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101ca8(void)

{
  return;
}




void FUN_00102f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010313b(param_1,param_2,param_3);
  return;
}




void FUN_00101509(void)

{
  long in_FS_OFFSET;
  FILE *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ec(local_58);
  local_68 = (FILE *)0x0;
                    /* try { // try from 00101547 to 0010161f has its CatchHandler @ 0010166b */
  local_68 = fopen("file.txt","w+");
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_68);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_68);
  FUN_00101b36(local_38,local_58);
                    /* try { // try from 00101627 to 0010162b has its CatchHandler @ 00101656 */
  FUN_00103503(local_38);
  FUN_001019aa(local_38);
  FUN_001019aa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ab2(void)

{
  return;
}




void FUN_00103778(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103648(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102f19(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030c5(param_1,param_2,param_3);
  return;
}




void FUN_001036f3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103189(undefined8 param_1)

{
  FUN_001031d6(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102eb2(void)

{
  return;
}




void FUN_00102a1a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e2a(param_1,param_2);
  return;
}




void * FUN_001034a0(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103ade(void)

{
  return;
}




void FUN_001036c8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010382c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001026aa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b44(param_1);
  FUN_00102ba9(*param_1,uVar1);
  return;
}




void FUN_00103b15(void)

{
  return;
}




void FUN_001037f9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102ce6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00101cb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025b9(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102e6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b5a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101896(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001018ac(undefined8 param_1)

{
  FUN_00101938(param_1);
  return;
}




void FUN_00103385(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102cd4(param_3);
  uVar2 = FUN_00102cd4(local_28);
  uVar3 = FUN_00102cd4(local_20);
  uVar1 = FUN_0010346b(uVar3,uVar2,uVar1);
  FUN_00102f4e(&local_30,uVar1);
  return;
}




undefined8 FUN_00101d54(undefined8 param_1)

{
  return param_1;
}



