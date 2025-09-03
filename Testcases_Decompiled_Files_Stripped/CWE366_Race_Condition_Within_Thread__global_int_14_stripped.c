
bool FUN_00101ec8(pthread_t *param_1)

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




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




undefined8 FUN_00101cc6(void)

{
  return 1;
}




void FUN_001018f4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101784(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017f3("Calling good()...");
  FUN_00101765();
  FUN_001017f3("Finished good()");
  FUN_001017f3("Calling bad()...");
  FUN_00101434();
  FUN_001017f3("Finished bad()");
  return 0;
}




void FUN_0010191f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010152e(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00105014 == 5) {
    local_20 = 0;
    local_18 = 0;
    iVar1 = FUN_00101f46(&DAT_00105028);
    if (iVar1 != 0) {
      iVar1 = FUN_00101dfb(FUN_001013de,0,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = FUN_00101dfb(FUN_001013de,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_20 != 0) {
        iVar1 = FUN_00101ec8(local_20);
        if (iVar1 != 0) {
          FUN_00101f23(local_20);
        }
      }
      if (local_18 != 0) {
        iVar1 = FUN_00101ec8(local_18);
        if (iVar1 != 0) {
          FUN_00101f23(local_18);
        }
      }
      FUN_00101ffd(DAT_00105028);
      FUN_0010184b(DAT_00105024);
    }
  }
  else {
    FUN_001017f3("Benign, fixed string");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017f3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101da3(void)

{
  return;
}




void FUN_00101a22(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101dfb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dc4,local_18);
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




void FUN_00101650(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00105014 == 5) {
    local_20 = 0;
    local_18 = 0;
    iVar1 = FUN_00101f46(&DAT_00105028);
    if (iVar1 != 0) {
      iVar1 = FUN_00101dfb(FUN_001013de,0,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = FUN_00101dfb(FUN_001013de,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_20 != 0) {
        iVar1 = FUN_00101ec8(local_20);
        if (iVar1 != 0) {
          FUN_00101f23(local_20);
        }
      }
      if (local_18 != 0) {
        iVar1 = FUN_00101ec8(local_18);
        if (iVar1 != 0) {
          FUN_00101f23(local_18);
        }
      }
      FUN_00101ffd(DAT_00105028);
      FUN_0010184b(DAT_00105024);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d61(void)

{
  return;
}




void FUN_00101975(undefined4 param_1)

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




void FUN_00101d8d(void)

{
  return;
}




undefined8 FUN_00101f23(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010189f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001013de(void)

{
  undefined4 local_c;
  
  FUN_00101fbf(DAT_00105028);
  for (local_c = 0; local_c < 1000000; local_c = local_c + 1) {
    DAT_00105024 = DAT_00105024 + 1;
  }
  FUN_00101fde(DAT_00105028);
  return;
}




void FUN_00101d35(void)

{
  return;
}




void FUN_00101434(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00105014 == 5) {
    local_20 = 0;
    local_18 = 0;
    DAT_00105020 = 0;
    iVar1 = FUN_00101dfb(FUN_001013a9,0,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    iVar1 = FUN_00101dfb(FUN_001013a9,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_20 != 0) {
      iVar1 = FUN_00101ec8(local_20);
      if (iVar1 != 0) {
        FUN_00101f23(local_20);
      }
    }
    if (local_18 != 0) {
      iVar1 = FUN_00101ec8(local_18);
      if (iVar1 != 0) {
        FUN_00101f23(local_18);
      }
    }
    FUN_0010184b(DAT_00105020);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101873(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d40(void)

{
  return;
}




void FUN_00101d2a(void)

{
  return;
}




void FUN_0010184b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001020a0(void)

{
  return;
}




void FUN_00101d6c(void)

{
  return;
}




void FUN_001013a9(void)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 1000000; local_c = local_c + 1) {
    DAT_00105020 = DAT_00105020 + 1;
  }
  return;
}




void FUN_00101ffd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001019f7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101fde(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d09(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_00101d77(void)

{
  return;
}




void FUN_00101a83(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00101ae3(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00101be7(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cd5(void)

{
  return 0;
}




void FUN_00101d56(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00105008);
    }
    FUN_001012f0();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101cfe(void)

{
  return;
}




void FUN_00101d82(void)

{
  return;
}




int FUN_00101ce4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d98(void)

{
  return;
}




void FUN_00101fbf(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102030(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_001018c9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d1f(void)

{
  return;
}




void FUN_00101765(void)

{
  FUN_0010152e();
  FUN_00101650();
  return;
}




void FUN_00101d14(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f30)();
  return;
}




void FUN_00101d4b(void)

{
  return;
}




void FUN_001019cf(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a50(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101db9(void)

{
  return;
}




void FUN_0010194a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101f46(undefined8 *param_1)

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




void FUN_00101819(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101dae(void)

{
  return;
}




void FUN_00101dc4(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



