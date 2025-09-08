
undefined8 FUN_0010387e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001039d0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a98(undefined8 param_1)

{
  FUN_00103efe(param_1);
  return;
}




void FUN_001043b2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010458a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00104e00(void)

{
  return;
}




undefined8 FUN_00103da7(undefined8 param_1,undefined8 param_2)

{
  FUN_00103dd4(param_1,param_2);
  return param_1;
}




void FUN_00103a64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103efe(param_1);
  FUN_00103f63(*param_1,uVar1);
  return;
}




undefined8 FUN_00102bea(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001048b3("Calling good()...");
  FUN_00102bda();
  FUN_001048b3("Finished good()");
  FUN_001048b3("Calling bad()...");
  FUN_00102764();
  FUN_001048b3("Finished bad()");
  return 0;
}




undefined8 FUN_001030ac(undefined8 param_1)

{
  return param_1;
}




void FUN_00104e6e(void)

{
  return;
}




void FUN_00102cc6(undefined8 param_1)

{
  FUN_00103010(param_1);
  FUN_00103030(param_1);
  return;
}




void FUN_00104110(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103806(param_1);
  FUN_00104349(uVar1);
  return;
}




void FUN_00103062(void)

{
  return;
}




void FUN_00103030(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00104ebb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104e84,local_18);
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




void FUN_00104e42(void)

{
  return;
}




void FUN_00104e84(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010509e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001049df(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102dfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010310e(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00104806(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001030ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104e2c(void)

{
  return;
}




void FUN_00103ba2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010408e(param_2);
  uVar2 = FUN_0010408e(param_1);
  FUN_001040a0(uVar2,uVar1,param_3);
  return;
}




void FUN_00104e79(void)

{
  return;
}




void FUN_00103ec4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102609(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00102740(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010490b(*__ptr);
  free(__ptr);
  return;
}




long FUN_00103ab6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010310e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010310e(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_00104d95(void)

{
  return 0;
}




undefined8 FUN_0010400e(undefined8 param_1)

{
  return param_1;
}




void FUN_00104a0a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ef0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103806(param_2);
  FUN_001037b5(&local_31,uVar1);
  uVar1 = FUN_0010378e(param_2);
                    /* try { // try from 00102f56 to 00102f5a has its CatchHandler @ 00102fc3 */
  FUN_00103818(param_1,uVar1,&local_31);
  FUN_00102cf2(&local_31);
  uVar2 = FUN_001030ac(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001038d6(param_2);
  uVar4 = FUN_0010387e(param_2);
                    /* try { // try from 00102fa4 to 00102fa8 has its CatchHandler @ 00102fe1 */
  uVar1 = FUN_0010392e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104266(void)

{
  return;
}




void FUN_00104ddf(void)

{
  return;
}




void FUN_00104448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104622(param_1,param_2,param_3);
  return;
}




void FUN_00103f26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103f14(param_3);
  FUN_00104224(param_1,param_2,uVar1);
  return;
}




void FUN_00104dc9(void)

{
  return;
}




void FUN_00103dd4(undefined8 param_1,undefined8 param_2)

{
  FUN_001041e0(param_1,param_2);
  return;
}




void FUN_001031bc(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00103c28(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001036dc(local_80);
      local_60 = FUN_00103ab6(&local_88,&local_78);
      local_70 = FUN_00103d18(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001030ac(local_80);
                    /* try { // try from 001034c6 to 00103551 has its CatchHandler @ 00103609 */
      FUN_00103bf3(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001030ac(local_80);
      puVar2 = (undefined8 *)FUN_0010310e(&local_88);
      local_70 = FUN_00103d4f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001030ac(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010310e(&local_88);
      local_70 = FUN_00103d4f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001030ac(local_80);
      FUN_001030be(*local_80,local_80[1],uVar1);
      FUN_00103072(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103a04(local_38,param_1,param_4);
                    /* try { // try from 00103246 to 00103419 has its CatchHandler @ 001035eb */
      local_50 = FUN_00103a98(local_38);
      local_78 = FUN_00102dac(local_80);
      local_48 = FUN_00103ab6(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001030ac(local_80);
        FUN_00103afa(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_0010310e(&local_88);
        FUN_00103b52(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010310e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010310e(&local_88);
        FUN_00103ba2(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001030ac(local_80);
        lVar4 = FUN_00103bf3(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001030ac(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010310e(&local_88);
        FUN_00103afa(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010310e(&local_88);
        FUN_00103ba2(*puVar2,local_40,local_50);
      }
      FUN_00103a64(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00104479(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




undefined8 FUN_001039f2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104193(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010427a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010400e(param_2);
  uVar2 = FUN_0010400e(param_1);
  FUN_00104020(uVar2,uVar1,param_3);
  return;
}




void FUN_00102e2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00103120(param_1);
  local_18 = FUN_00103177(&local_38,&local_20);
  local_20 = FUN_001036dc(local_30);
  uVar1 = FUN_00103728(&local_20,local_18);
  FUN_001031bc(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001036dc(local_30);
  FUN_00103728(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103010(undefined8 param_1)

{
  FUN_00103964(param_1);
  return;
}




undefined8 FUN_00103806(undefined8 param_1)

{
  return param_1;
}




void FUN_0010490b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e98)();
  return;
}




undefined8 FUN_001038d6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001039d0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104318(param_1,param_2,param_3);
  return;
}




void FUN_00102c86(undefined8 param_1)

{
  FUN_00102cc6(param_1);
  return;
}




void * FUN_001047a3(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00105160(void)

{
  return;
}




void FUN_00104e4d(void)

{
  return;
}




void FUN_00102ca6(undefined8 param_1)

{
  FUN_00102c86(param_1);
  return;
}




void FUN_001026a4(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00102740(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010490b(*__ptr);
  free(__ptr);
  return;
}




void FUN_00104622(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010470f(param_2);
  uVar2 = FUN_0010470f(param_1);
  FUN_00104735(uVar2,uVar1,param_3);
  return;
}




void FUN_00102cf2(undefined8 param_1)

{
  FUN_00103062(param_1);
  return;
}




void FUN_00104318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044ef(param_1,param_2,param_3);
  return;
}




void FUN_00103d4f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104193(param_2);
  uVar2 = FUN_00104193(param_1);
  FUN_00103fd9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103dfe(undefined8 param_1,undefined8 param_2)

{
  FUN_00103dd4(param_1,param_2);
  FUN_00103030(param_1);
  return;
}




void FUN_00104dd4(void)

{
  return;
}




undefined8 FUN_001036dc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030ec(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001045a2(undefined8 param_1)

{
  return param_1;
}




void FUN_00104dea(void)

{
  return;
}




void FUN_00103afa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103f8d(param_2);
  uVar2 = FUN_00103f8d(param_1);
  FUN_00103fd9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010507f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104dbe(void)

{
  return;
}




undefined8 FUN_00102c4f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104933(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010427a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104ae2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103072(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103973(param_1,param_2,param_3);
  }
  return;
}




long FUN_00102740(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_001044ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010408e(param_1);
  uVar1 = FUN_00104672(uVar1,param_2,param_3);
  FUN_00104302(&local_10,uVar1);
  return;
}




undefined8 FUN_0010310e(undefined8 param_1)

{
  return param_1;
}




void FUN_001050f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103bf3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001040da(param_1,param_2,param_3);
  return;
}




void FUN_00103964(void)

{
  return;
}




undefined8 FUN_001037b5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103da7(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00103f14(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00102c4f(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00104e37(void)

{
  return;
}




undefined8 FUN_00103f8d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010427a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104fe3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001030ac(param_1);
  FUN_001030be(*param_1,param_1[1],uVar1);
  FUN_00102d12(param_1);
  return;
}




void FUN_00102bda(void)

{
  FUN_00102a5f();
  return;
}




void FUN_00104298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104448(param_1,param_2,param_3);
  return;
}




void FUN_001039a5(undefined8 param_1,undefined8 param_2)

{
  FUN_00103eeb(param_1,param_2);
  return;
}




void FUN_00104ab7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00105006(undefined8 *param_1)

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




undefined8 FUN_0010458a(void)

{
  return 0x1fffffffffffffff;
}




undefined8 FUN_0010408e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010470f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104806(&local_10);
  FUN_0010400e(uVar1);
  return;
}




void FUN_00103e34(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103d18(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_0010453d(undefined8 param_1)

{
  FUN_0010458a(param_1);
  return;
}




undefined8 FUN_00103728(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001030ec(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_00102d12(long *param_1)

{
  FUN_00103072(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00102c66(param_1);
  return;
}




void FUN_00103a04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103f14(param_3);
  uVar2 = FUN_00103efe(param_1);
  FUN_00103f26(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010495f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001048d9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001042cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104479(param_1,param_2,param_3);
  return;
}




void FUN_00104e58(void)

{
  return;
}




undefined8 FUN_00104349(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_0010453d(param_1);
  puVar1 = (undefined8 *)FUN_0010455b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001050bd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong * FUN_0010455b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104e16(void)

{
  return;
}




ulong FUN_00104ca7(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001041e0(void)

{
  return;
}




void FUN_001030be(undefined8 param_1,undefined8 param_2)

{
  FUN_001039a5(param_1,param_2);
  return;
}




int FUN_00104da4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103f14(undefined8 param_1)

{
  return param_1;
}




undefined4 * FUN_00104672(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00104a35(undefined4 param_1)

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




void FUN_00104020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010408e(param_3);
  uVar2 = FUN_0010408e(local_28);
  uVar3 = FUN_0010408e(local_20);
  uVar1 = FUN_001042cd(uVar3,uVar2,uVar1);
  FUN_00104302(&local_30,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




void FUN_00104df5(void)

{
  return;
}




void FUN_001048b3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104b43(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00103c28(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00104110(param_1);
  lVar2 = FUN_0010378e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010378e(local_40);
  local_30 = FUN_0010378e(local_40);
  plVar3 = (long *)FUN_00104136(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010378e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00104110(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00104110(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_0010378e(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00104165(undefined8 param_1,undefined8 param_2)

{
  FUN_001043b2(param_1,param_2,0);
  return;
}




void FUN_00104e0b(void)

{
  return;
}




void FUN_001041f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001043f8(param_1,param_2,param_3);
  return;
}




void FUN_00103e8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001041f3(param_1,param_2,param_3);
  return;
}




void FUN_001040a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102550();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102dac(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030ec(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00104f88(pthread_t *param_1)

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




long FUN_00103177(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001039f2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001039f2(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00104989(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104b10(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103dfe(param_1,param_3);
                    /* try { // try from 00103852 to 00103856 has its CatchHandler @ 00103859 */
  FUN_00103e34(param_1,param_2);
  return;
}




undefined8 FUN_00104d86(void)

{
  return 1;
}




void FUN_00104e21(void)

{
  return;
}




void FUN_00103973(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ec4(param_1,param_2,param_3);
  return;
}




void FUN_00102764(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined local_88 [32];
  undefined8 local_68 [4];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ca6(local_88);
  local_a0 = -1;
  local_98 = 0xffffffff;
  local_9c = -1;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_98,&local_48,0x10);
                    /* try { // try from 0010285e to 001029e6 has its CatchHandler @ 00102a32 */
    if (((iVar1 != -1) && (iVar1 = listen(local_98,5), iVar1 != -1)) &&
       (local_9c = accept(local_98,(sockaddr *)0x0,(socklen_t *)0x0), local_9c != -1)) {
      sVar2 = recv(local_9c,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_a0 = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  if (local_9c != -1) {
    close(local_9c);
  }
  local_90 = FUN_00102dac(local_88);
  FUN_00102dfc(local_68,&local_90);
  FUN_00102e2a(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102dac(local_88);
  FUN_00102dfc(local_68,&local_90);
  FUN_00102e2a(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102dac(local_88);
  FUN_00102dfc(local_68,&local_90);
  FUN_00102e2a(local_88,local_68[0],1,&local_a0);
  FUN_00102ef0(local_68,local_88);
                    /* try { // try from 001029ee to 001029f2 has its CatchHandler @ 00102a1d */
  FUN_00102609(local_68);
  FUN_00102d64(local_68);
  FUN_00102d64(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103fd9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104298(param_1,param_2,param_3);
  return;
}




void FUN_001049b4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104735(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010408e(param_3);
  uVar2 = FUN_0010408e(local_28);
  uVar3 = FUN_0010408e(local_20);
  uVar1 = FUN_0010481b(uVar3,uVar2,uVar1);
  FUN_00104302(&local_30,uVar1);
  return;
}




void FUN_001045b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010408e(param_3);
  uVar2 = FUN_001046b9(local_28);
  uVar3 = FUN_001046b9(local_20);
  uVar1 = FUN_001046da(uVar3,uVar2,uVar1);
  FUN_00104302(&local_30,uVar1);
  return;
}




void FUN_00104e63(void)

{
  return;
}




void FUN_00103f63(undefined8 param_1,undefined8 param_2)

{
  FUN_00104266(param_1,param_2);
  return;
}




void FUN_001046da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047a3(param_1,param_2,param_3);
  return;
}




ulong * FUN_00104136(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




long FUN_00103efe(long param_1)

{
  return param_1 + 8;
}




void FUN_0010392e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103e8e(param_1,param_2,param_3);
  return;
}




void FUN_001043f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001045a2(param_2);
  uVar2 = FUN_001045a2(param_1);
  FUN_001045b4(uVar2,uVar1,param_3);
  return;
}




void FUN_00104a8f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001046b9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001039f2(&local_10);
  return *puVar1;
}




void * FUN_00104850(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00103120(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001039d0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00104ba3(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010481b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104850(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103d18(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104165(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102a5f(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ca6(local_58);
  local_64 = 0x14;
  local_60 = FUN_00102dac(local_58);
  FUN_00102dfc(local_38,&local_60);
                    /* try { // try from 00102acf to 00102b64 has its CatchHandler @ 00102bb0 */
  FUN_00102e2a(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102dac(local_58);
  FUN_00102dfc(local_38,&local_60);
  FUN_00102e2a(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102dac(local_58);
  FUN_00102dfc(local_38,&local_60);
  FUN_00102e2a(local_58,local_38[0],1,&local_64);
  FUN_00102ef0(local_38,local_58);
                    /* try { // try from 00102b6c to 00102b70 has its CatchHandler @ 00102b9b */
  FUN_001026a4(local_38);
  FUN_00102d64(local_38);
  FUN_00102d64(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103eeb(void)

{
  return;
}




undefined8 FUN_00104302(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c66(undefined8 param_1)

{
  FUN_00102cf2(param_1);
  return;
}



