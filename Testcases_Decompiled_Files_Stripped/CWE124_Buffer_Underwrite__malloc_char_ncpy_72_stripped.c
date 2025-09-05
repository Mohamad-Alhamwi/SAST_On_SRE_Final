
undefined8 FUN_0010313a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001033c2(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103c52(void)

{
  return;
}




void * FUN_001035df(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




ulong * FUN_00103393(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102b81(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fc9(param_2);
  uVar2 = FUN_00102fc9(param_1);
  FUN_00102e0b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102ed2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103029(param_1,param_2,param_3);
  return;
}




void FUN_0010397f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101b96(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ede(param_1);
  FUN_00101ef0(*param_1,param_1[1],uVar1);
  FUN_00101b44(param_1);
  return;
}




void FUN_00101c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f52(param_1);
  local_18 = FUN_00101fa9(&local_38,&local_20);
  local_20 = FUN_0010250e(local_30);
  uVar1 = FUN_0010255a(&local_20,local_18);
  FUN_00101fee(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010250e(local_30);
  FUN_0010255a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ec0(param_3);
  uVar2 = FUN_00102ec0(local_28);
  uVar3 = FUN_00102ec0(local_20);
  uVar1 = FUN_00103105(uVar3,uVar2,uVar1);
  FUN_0010313a(&local_30,uVar1);
  return;
}




void FUN_00101ad8(undefined8 param_1)

{
  FUN_00101ab8(param_1);
  return;
}




void FUN_00101ef0(undefined8 param_1,undefined8 param_2)

{
  FUN_001027d7(param_1,param_2);
  return;
}




undefined8 FUN_00102e40(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d46(param_3);
  FUN_0010305a(param_1,param_2,uVar1);
  return;
}




void FUN_00103ef9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102f46(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102638(param_1);
  FUN_00103181(uVar1);
  return;
}




undefined8 * FUN_001034aa(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103715(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010292c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dbf(param_2);
  uVar2 = FUN_00102dbf(param_1);
  FUN_00102e0b(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00101f52(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102802(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001033da(undefined8 param_1)

{
  return param_1;
}




long FUN_0010166a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102836(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d46(param_3);
  uVar2 = FUN_00102d30(param_1);
  FUN_00102d58(*param_1,uVar2,uVar1);
  return;
}




void FUN_001027d7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d1d(param_1,param_2);
  return;
}




void FUN_00101ea4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027a5(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103871(undefined4 param_1)

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




undefined8 FUN_00102dbf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c05(void)

{
  return;
}




void FUN_00103c68(void)

{
  return;
}




void FUN_00101fee(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a5a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010250e(local_80);
      local_60 = FUN_001028e8(&local_88,&local_78);
      local_70 = FUN_00102b4a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ede(local_80);
                    /* try { // try from 001022f8 to 00102383 has its CatchHandler @ 0010243b */
      FUN_00102a25(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ede(local_80);
      puVar2 = (undefined8 *)FUN_00101f40(&local_88);
      local_70 = FUN_00102b81(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ede(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f40(&local_88);
      local_70 = FUN_00102b81(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ede(local_80);
      FUN_00101ef0(*local_80,local_80[1],uVar1);
      FUN_00101ea4(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102836(local_38,param_1,param_4);
                    /* try { // try from 00102078 to 0010224b has its CatchHandler @ 0010241d */
      local_50 = FUN_001028ca(local_38);
      local_78 = FUN_00101bde(local_80);
      local_48 = FUN_001028e8(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ede(local_80);
        FUN_0010292c(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f40(&local_88);
        FUN_00102984(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f40(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f40(&local_88);
        FUN_001029d4(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ede(local_80);
        lVar4 = FUN_00102a25(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ede(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f40(&local_88);
        FUN_0010292c(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f40(&local_88);
        FUN_001029d4(*puVar2,local_40,local_50);
      }
      FUN_00102896(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037c5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103642(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103016(void)

{
  return;
}




long FUN_001032b1(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103c73(void)

{
  return;
}




void FUN_00103327(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ec0(param_1);
  uVar1 = FUN_001034aa(uVar1,param_2,param_3);
  FUN_0010313a(&local_10,uVar1);
  return;
}




undefined8 FUN_00103bc2(void)

{
  return 1;
}




void FUN_0010345a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010354b(param_2);
  uVar2 = FUN_0010354b(param_1);
  FUN_00103571(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d95(undefined8 param_1,undefined8 param_2)

{
  FUN_0010309e(param_1,param_2);
  return;
}




void FUN_00102e0b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d0(param_1,param_2,param_3);
  return;
}




void FUN_00101e62(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001030d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103280(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102824(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101a1c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036ef("Calling good()...");
  FUN_00101a0c();
  FUN_001036ef("Finished good()");
  FUN_001036ef("Calling bad()...");
  FUN_0010168e();
  FUN_001036ef("Finished bad()");
  return 0;
}




void FUN_00103150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103327(param_1,param_2,param_3);
  return;
}




void FUN_0010394c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102c30(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c06(param_1,param_2);
  FUN_00101e62(param_1);
  return;
}




void FUN_00103eda(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102c66(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b4a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e40(param_2);
  uVar2 = FUN_00102e40(param_1);
  FUN_00102e52(uVar2,uVar1,param_3);
  return;
}




void FUN_00103cc0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102cf6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c3c(void)

{
  return;
}




void FUN_00103571(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ec0(param_3);
  uVar2 = FUN_00102ec0(local_28);
  uVar3 = FUN_00102ec0(local_20);
  uVar1 = FUN_00103657(uVar3,uVar2,uVar1);
  FUN_0010313a(&local_30,uVar1);
  return;
}




void FUN_0010168e(void)

{
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad8(local_58);
  local_70 = 0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  local_68 = FUN_00101bde(local_58);
  FUN_00101c2e(local_38,&local_68);
                    /* try { // try from 00101744 to 001017d9 has its CatchHandler @ 00101825 */
  FUN_00101c5c(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101bde(local_58);
  FUN_00101c2e(local_38,&local_68);
  FUN_00101c5c(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101bde(local_58);
  FUN_00101c2e(local_38,&local_68);
  FUN_00101c5c(local_58,local_38[0],1,&local_70);
  FUN_00101d22(local_38,local_58);
                    /* try { // try from 001017e1 to 001017e5 has its CatchHandler @ 00101810 */
  FUN_00101529(local_38);
  FUN_00101b96(local_38);
  FUN_00101b96(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103657(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010368c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102708(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102802(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103029(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103230(param_1,param_2,param_3);
  return;
}




void FUN_00103caa(void)

{
  return;
}




void FUN_00102802(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001033ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ec0(param_3);
  uVar2 = FUN_001034f5(local_28);
  uVar3 = FUN_001034f5(local_20);
  uVar1 = FUN_00103516(uVar3,uVar2,uVar1);
  FUN_0010313a(&local_30,uVar1);
  return;
}




undefined8 FUN_00102bd9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c06(param_1,param_2);
  return param_1;
}




void FUN_00103c10(void)

{
  return;
}




undefined8 FUN_00102ec0(undefined8 param_1)

{
  return param_1;
}




void FUN_001029d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ec0(param_2);
  uVar2 = FUN_00102ec0(param_1);
  FUN_00102ed2(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c7e(void)

{
  return;
}




void FUN_00101ab8(undefined8 param_1)

{
  FUN_00101af8(param_1);
  return;
}




ulong * FUN_00102f6c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001034f5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102824(&local_10);
  return *puVar1;
}




void FUN_001031ea(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033c2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001030b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103bfa(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010166a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001036ef(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010381b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a98(undefined8 param_1)

{
  FUN_00101b24(param_1);
  return;
}




long FUN_00102d30(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00101f40(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b4a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f9b(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103c1b(void)

{
  return;
}




void FUN_00103280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010345a(param_1,param_2,param_3);
  return;
}




void FUN_00101af8(undefined8 param_1)

{
  FUN_00101e42(param_1);
  FUN_00101e62(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001038f3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103c9f(void)

{
  return;
}




undefined8 FUN_00103e42(undefined8 *param_1)

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




void * FUN_0010368c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c89(void)

{
  return;
}




void FUN_0010305a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d46(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a81(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102896(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d30(param_1);
  FUN_00102d95(*param_1,uVar1);
  return;
}




void FUN_00102d1d(void)

{
  return;
}




void FUN_00103375(undefined8 param_1)

{
  FUN_001033c2(param_1);
  return;
}




void FUN_00101a0c(void)

{
  FUN_0010184f();
  return;
}




undefined8 FUN_0010255a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f1e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c26(void)

{
  return;
}




void FUN_00103c47(void)

{
  return;
}




void FUN_00103c94(void)

{
  return;
}




undefined8 FUN_0010250e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f1e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103bd1(void)

{
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00102f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103150(param_1,param_2,param_3);
  return;
}




void FUN_001027a5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cf6(param_1,param_2,param_3);
  return;
}




void FUN_0010379b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103cf7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cc0,local_18);
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




void FUN_001038cb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102638(undefined8 param_1)

{
  return param_1;
}




void FUN_001028ca(undefined8 param_1)

{
  FUN_00102d30(param_1);
  return;
}




void FUN_00103516(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035df(param_1,param_2,param_3);
  return;
}




void FUN_0010309e(void)

{
  return;
}




ulong FUN_00103ae3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010264a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c30(param_1,param_3);
                    /* try { // try from 00102684 to 00102688 has its CatchHandler @ 0010268b */
  FUN_00102c66(param_1,param_2);
  return;
}




int FUN_00103be0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001036ef(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010391e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001028e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f40(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f40(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102d46(undefined8 param_1)

{
  return param_1;
}




void FUN_00102796(void)

{
  return;
}




undefined8 FUN_00102fc9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103105(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b1(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001026b0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102802(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033da(param_2);
  uVar2 = FUN_001033da(param_1);
  FUN_001033ec(uVar2,uVar1,param_3);
  return;
}




void FUN_001015c9(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010166a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001036ef(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a81(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a25(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f10(param_1,param_2,param_3);
  return;
}




void FUN_00103846(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_001025e7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bd9(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010184f(void)

{
  long in_FS_OFFSET;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad8(local_58);
  local_70 = (void *)0x0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  local_68 = FUN_00101bde(local_58);
  FUN_00101c2e(local_38,&local_68);
                    /* try { // try from 00101901 to 00101996 has its CatchHandler @ 001019e2 */
  FUN_00101c5c(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101bde(local_58);
  FUN_00101c2e(local_38,&local_68);
  FUN_00101c5c(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101bde(local_58);
  FUN_00101c2e(local_38,&local_68);
  FUN_00101c5c(local_58,local_38[0],1,&local_70);
  FUN_00101d22(local_38,local_58);
                    /* try { // try from 0010199e to 001019a2 has its CatchHandler @ 001019cd */
  FUN_001015c9(local_38);
  FUN_00101b96(local_38);
  FUN_00101b96(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ebb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103cb5(void)

{
  return;
}




void FUN_001037f0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103e1f(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_001039df(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f1e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00101fa9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102824(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102824(param_2);
  return lVar1 - *plVar2 >> 3;
}




long FUN_001025c0(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_0010376f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103181(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103375(param_1);
  puVar1 = (undefined8 *)FUN_00103393(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00101bde(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f1e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c5d(void)

{
  return;
}




void FUN_00101b44(long *param_1)

{
  FUN_00101ea4(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a98(param_1);
  return;
}




void FUN_00101e94(void)

{
  return;
}




bool FUN_00103dc4(pthread_t *param_1)

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




void FUN_00103fa0(void)

{
  return;
}




void FUN_00102f9b(undefined8 param_1,undefined8 param_2)

{
  FUN_001031ea(param_1,param_2,0);
  return;
}




void FUN_00101e42(undefined8 param_1)

{
  FUN_00102796(param_1);
  return;
}




void FUN_00103f30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b24(undefined8 param_1)

{
  FUN_00101e94(param_1);
  return;
}




void FUN_0010354b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103642(&local_10);
  FUN_00102e40(uVar1);
  return;
}




void FUN_00101d22(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102638(param_2);
  FUN_001025e7(&local_31,uVar1);
  uVar1 = FUN_001025c0(param_2);
                    /* try { // try from 00101d88 to 00101d8c has its CatchHandler @ 00101df5 */
  FUN_0010264a(param_1,uVar1,&local_31);
  FUN_00101b24(&local_31);
  uVar2 = FUN_00101ede(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102708(param_2);
  uVar4 = FUN_001026b0(param_2);
                    /* try { // try from 00101dd6 to 00101dda has its CatchHandler @ 00101e13 */
  uVar1 = FUN_00102760(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102a5a(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f46(param_1);
  lVar2 = FUN_001025c0(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025c0(local_40);
  local_30 = FUN_001025c0(local_40);
  plVar3 = (long *)FUN_00102f6c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025c0(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f46(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f46(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cc0(param_1,param_2,param_3);
  return;
}




void FUN_00101c2e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f40(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103747(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103c31(void)

{
  return;
}




undefined8 FUN_00101ede(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c06(undefined8 param_1,undefined8 param_2)

{
  FUN_00103016(param_1,param_2);
  return;
}



