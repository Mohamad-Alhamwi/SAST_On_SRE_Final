
void FUN_0010334b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ee4(param_1);
  uVar1 = FUN_001034ce(uVar1,param_2,param_3);
  FUN_0010315e(&local_10,uVar1);
  return;
}




void FUN_0010356f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103666(&local_10);
  FUN_00102e64(uVar1);
  return;
}




void FUN_00103cc3(void)

{
  return;
}




void FUN_00103793(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010353a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103603(param_1,param_2,param_3);
  return;
}




void FUN_00102d41(void)

{
  return;
}




void FUN_0010304d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103254(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102de3(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030d6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c29(void)

{
  return;
}




void FUN_00101eb8(void)

{
  return;
}




void FUN_00101f14(undefined8 param_1,undefined8 param_2)

{
  FUN_001027fb(param_1,param_2);
  return;
}




undefined8 FUN_00102fed(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030d6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f76(param_1);
  local_18 = FUN_00101fcd(&local_38,&local_20);
  local_20 = FUN_00102532(local_30);
  uVar1 = FUN_0010257e(&local_20,local_18);
  FUN_00102012(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102532(local_30);
  FUN_0010257e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010257e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f42(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fbf(undefined8 param_1,undefined8 param_2)

{
  FUN_0010320e(param_1,param_2,0);
  return;
}




void FUN_00102ef6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001030c2(void)

{
  return;
}




void FUN_0010367b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036b0(param_1,param_2,param_3);
  return;
}




void FUN_0010386a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102bfd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c2a(param_1,param_2);
  return param_1;
}




undefined8 FUN_0010265c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103595(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ee4(param_3);
  uVar2 = FUN_00102ee4(local_28);
  uVar3 = FUN_00102ee4(local_20);
  uVar1 = FUN_0010367b(uVar3,uVar2,uVar1);
  FUN_0010315e(&local_30,uVar1);
  return;
}




void FUN_00101adc(undefined8 param_1)

{
  FUN_00101b1c(param_1);
  return;
}




void FUN_00102a49(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f34(param_1,param_2,param_3);
  return;
}




void FUN_00102950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102de3(param_2);
  uVar2 = FUN_00102de3(param_1);
  FUN_00102e2f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102012(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a7e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102532(local_80);
      local_60 = FUN_0010290c(&local_88,&local_78);
      local_70 = FUN_00102b6e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f02(local_80);
                    /* try { // try from 0010231c to 001023a7 has its CatchHandler @ 0010245f */
      FUN_00102a49(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f02(local_80);
      puVar2 = (undefined8 *)FUN_00101f64(&local_88);
      local_70 = FUN_00102ba5(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f02(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f64(&local_88);
      local_70 = FUN_00102ba5(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f02(local_80);
      FUN_00101f14(*local_80,local_80[1],uVar1);
      FUN_00101ec8(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010285a(local_38,param_1,param_4);
                    /* try { // try from 0010209c to 0010226f has its CatchHandler @ 00102441 */
      local_50 = FUN_001028ee(local_38);
      local_78 = FUN_00101c02(local_80);
      local_48 = FUN_0010290c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f02(local_80);
        FUN_00102950(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f64(&local_88);
        FUN_001029a8(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f64(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f64(&local_88);
        FUN_001029f8(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f02(local_80);
        lVar4 = FUN_00102a49(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f02(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f64(&local_88);
        FUN_00102950(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f64(&local_88);
        FUN_001029f8(*puVar2,local_40,local_50);
      }
      FUN_001028ba(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00103b07(long param_1,ulong param_2,long param_3)

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




void FUN_00102f6a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010265c(param_1);
  FUN_001031a5(uVar1);
  return;
}




void FUN_00103c76(void)

{
  return;
}




void FUN_00103cd9(void)

{
  return;
}




undefined8 FUN_001026d4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102826(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103942(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001037bf(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010315e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010347e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010356f(param_2);
  uVar2 = FUN_0010356f(param_1);
  FUN_00103595(uVar2,uVar1,param_3);
  return;
}




void FUN_00103ce4(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 * FUN_001034ce(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103c4a(void)

{
  return;
}




undefined8 FUN_00103666(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103174(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102f90(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00101f76(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102826(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010347e(param_1,param_2,param_3);
  return;
}




void FUN_00101599(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010162a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_00103713(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ee4(param_2);
  uVar2 = FUN_00102ee4(param_1);
  FUN_00102ef6(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b68(long *param_1)

{
  FUN_00101ec8(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101abc(param_1);
  return;
}




void FUN_00103399(undefined8 param_1)

{
  FUN_001033e6(param_1);
  return;
}




void FUN_00103c1e(void)

{
  return;
}




void FUN_00102d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d6a(param_3);
  FUN_0010307e(param_1,param_2,uVar1);
  return;
}




void FUN_00102db9(undefined8 param_1,undefined8 param_2)

{
  FUN_001030c2(param_1,param_2);
  return;
}




void FUN_00102c2a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010303a(param_1,param_2);
  return;
}




void FUN_00103f1d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102e2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030f4(param_1,param_2,param_3);
  return;
}




void FUN_00103cad(void)

{
  return;
}




void FUN_0010376b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101afc(undefined8 param_1)

{
  FUN_00101adc(param_1);
  return;
}




void FUN_001037e9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010285a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d6a(param_3);
  uVar2 = FUN_00102d54(param_1);
  FUN_00102d7c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010334b(param_1,param_2,param_3);
  return;
}




void FUN_00103edf(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001029a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e64(param_2);
  uVar2 = FUN_00102e64(param_1);
  FUN_00102e76(uVar2,uVar1,param_3);
  return;
}




void * FUN_00103603(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_00102d54(long param_1)

{
  return param_1 + 8;
}




void FUN_00103c81(void)

{
  return;
}




void FUN_0010303a(void)

{
  return;
}




void FUN_00102c54(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c2a(param_1,param_2);
  FUN_00101e86(param_1);
  return;
}




long FUN_0010162a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00103d1b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103ce4,local_18);
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




void FUN_00101c52(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f64(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001030d6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void * FUN_001036b0(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_001033e6(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033fe(param_2);
  uVar2 = FUN_001033fe(param_1);
  FUN_00103410(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c6b(void)

{
  return;
}




void FUN_00101509(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010162a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_00103713(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101aa5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_001039a3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101c02(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f42(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ee4(param_3);
  uVar2 = FUN_00102ee4(local_28);
  uVar3 = FUN_00102ee4(local_20);
  uVar1 = FUN_00103129(uVar3,uVar2,uVar1);
  FUN_0010315e(&local_30,uVar1);
  return;
}




undefined8 FUN_0010260b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bfd(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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




void FUN_00102d1a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c8c(void)

{
  return;
}




void FUN_00103410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ee4(param_3);
  uVar2 = FUN_00103519(local_28);
  uVar3 = FUN_00103519(local_20);
  uVar1 = FUN_0010353a(uVar3,uVar2,uVar1);
  FUN_0010315e(&local_30,uVar1);
  return;
}




undefined8 FUN_00101a40(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103713("Calling good()...");
  FUN_00101a30();
  FUN_00103713("Finished good()");
  FUN_00103713("Calling bad()...");
  FUN_0010164e();
  FUN_00103713("Finished bad()");
  return 0;
}




void FUN_00101d46(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010265c(param_2);
  FUN_0010260b(&local_31,uVar1);
  uVar1 = FUN_001025e4(param_2);
                    /* try { // try from 00101dac to 00101db0 has its CatchHandler @ 00101e19 */
  FUN_0010266e(param_1,uVar1,&local_31);
  FUN_00101b48(&local_31);
  uVar2 = FUN_00101f02(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010272c(param_2);
  uVar4 = FUN_001026d4(param_2);
                    /* try { // try from 00101dfa to 00101dfe has its CatchHandler @ 00101e37 */
  uVar1 = FUN_00102784(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103bf5(void)

{
  return 0;
}




undefined8 FUN_00103e66(undefined8 *param_1)

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




void FUN_00103814(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00103de8(pthread_t *param_1)

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




undefined8 FUN_001031a5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103399(param_1);
  puVar1 = (undefined8 *)FUN_001033b7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong FUN_00102a7e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f6a(param_1);
  lVar2 = FUN_001025e4(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025e4(local_40);
  local_30 = FUN_001025e4(local_40);
  plVar3 = (long *)FUN_00102f90(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025e4(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f6a(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f6a(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102e64(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103519(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102848(&local_10);
  return *puVar1;
}




void FUN_00101b48(undefined8 param_1)

{
  FUN_00101eb8(param_1);
  return;
}




void FUN_00102784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ce4(param_1,param_2,param_3);
  return;
}




void FUN_00103c97(void)

{
  return;
}




void FUN_00103cb8(void)

{
  return;
}




undefined8 FUN_00103e43(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010272c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102826(&local_18,&local_20);
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




void FUN_00103c55(void)

{
  return;
}




void FUN_0010164e(void)

{
  long in_FS_OFFSET;
  undefined *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [3];
  undefined auStack_90 [8];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101afc(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d8 = auStack_90;
  local_d0 = FUN_00101c02(local_c8);
  FUN_00101c52(local_a8,&local_d0);
                    /* try { // try from 001016f4 to 001017b9 has its CatchHandler @ 00101811 */
  FUN_00101c80(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c02(local_c8);
  FUN_00101c52(local_a8,&local_d0);
  FUN_00101c80(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c02(local_c8);
  FUN_00101c52(local_a8,&local_d0);
  FUN_00101c80(local_c8,local_a8[0],1,&local_d8);
  FUN_00101d46(local_a8,local_c8);
                    /* try { // try from 001017c4 to 001017c8 has its CatchHandler @ 001017f9 */
  FUN_00101509(local_a8);
  FUN_00101bba(local_a8);
  FUN_00101bba(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010307e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d6a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101aa5(8,param_2);
  *puVar2 = uVar1;
  return;
}




long FUN_0010290c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f64(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f64(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103917(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103f50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00103be6(void)

{
  return 1;
}




void FUN_001027fb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d41(param_1,param_2);
  return;
}




undefined8 FUN_00102b6e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fbf(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103713(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010320e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033e6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103c3f(void)

{
  return;
}




void FUN_00102826(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103c60(void)

{
  return;
}




void FUN_0010383f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102ba5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fed(param_2);
  uVar2 = FUN_00102fed(param_1);
  FUN_00102e2f(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00102ee4(undefined8 param_1)

{
  return param_1;
}




int FUN_00103c04(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001028ee(undefined8 param_1)

{
  FUN_00102d54(param_1);
  return;
}




void FUN_00103129(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032d5(param_1,param_2,param_3);
  return;
}




long FUN_001032d5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00102848(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001033fe(undefined8 param_1)

{
  return param_1;
}




void FUN_00101abc(undefined8 param_1)

{
  FUN_00101b48(param_1);
  return;
}




void FUN_00101bba(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f02(param_1);
  FUN_00101f14(*param_1,param_1[1],uVar1);
  FUN_00101b68(param_1);
  return;
}




void FUN_00102c8a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b6e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




ulong FUN_00103a03(long param_1,ulong param_2,long param_3)

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




void FUN_00101841(void)

{
  long in_FS_OFFSET;
  undefined *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101afc(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d8 = local_88;
  local_d0 = FUN_00101c02(local_c8);
  FUN_00101c52(local_a8,&local_d0);
                    /* try { // try from 001018e3 to 001019a8 has its CatchHandler @ 00101a00 */
  FUN_00101c80(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c02(local_c8);
  FUN_00101c52(local_a8,&local_d0);
  FUN_00101c80(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c02(local_c8);
  FUN_00101c52(local_a8,&local_d0);
  FUN_00101c80(local_c8,local_a8[0],1,&local_d8);
  FUN_00101d46(local_a8,local_c8);
                    /* try { // try from 001019b3 to 001019b7 has its CatchHandler @ 001019e8 */
  FUN_00101599(local_a8);
  FUN_00101bba(local_a8);
  FUN_00101bba(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027c9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d1a(param_1,param_2,param_3);
  return;
}




void FUN_00101b1c(undefined8 param_1)

{
  FUN_00101e66(param_1);
  FUN_00101e86(param_1);
  return;
}




void FUN_00103efe(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103970(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103c34(void)

{
  return;
}




long FUN_001025e4(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_0010266e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c54(param_1,param_3);
                    /* try { // try from 001026a8 to 001026ac has its CatchHandler @ 001026af */
  FUN_00102c8a(param_1,param_2);
  return;
}




void FUN_001027ba(void)

{
  return;
}




void FUN_00101a30(void)

{
  FUN_00101841();
  return;
}




void FUN_001038ef(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong * FUN_001033b7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101ec8(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027c9(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103cce(void)

{
  return;
}




void FUN_00101e86(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




long FUN_00101fcd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102848(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102848(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103fc0(void)

{
  return;
}




void FUN_001030f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032a4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101f64(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e66(undefined8 param_1)

{
  FUN_001027ba(param_1);
  return;
}




void FUN_00103739(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f42(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010304d(param_1,param_2,param_3);
  return;
}




void FUN_001028ba(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d54(param_1);
  FUN_00102db9(*param_1,uVar1);
  return;
}




undefined8 FUN_00101f02(undefined8 param_1)

{
  return param_1;
}




void FUN_00103895(undefined4 param_1)

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




void FUN_00103ca2(void)

{
  return;
}




undefined8 FUN_00102532(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f42(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102d6a(undefined8 param_1)

{
  return param_1;
}



