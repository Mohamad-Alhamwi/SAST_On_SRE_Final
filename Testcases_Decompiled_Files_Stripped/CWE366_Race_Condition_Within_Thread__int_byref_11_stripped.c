
void FUN_00101db8(void)

{
  return;
}




void FUN_00101a37(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010182e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001013e6(int *param_1)

{
  undefined4 local_14;
  
  FUN_00101fd4(DAT_00105020);
  for (local_14 = 0; local_14 < 1000000; local_14 = local_14 + 1) {
    *param_1 = *param_1 + 1;
  }
  FUN_00101ff3(DAT_00105020);
  return;
}




void FUN_00101860(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_00101444(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00101cdb();
  if (iVar1 != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    iVar1 = FUN_00101e10(FUN_001013a9,&local_24,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    iVar1 = FUN_00101e10(FUN_001013a9,&local_24,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_20 != 0) {
      iVar1 = FUN_00101edd(local_20);
      if (iVar1 != 0) {
        FUN_00101f38(local_20);
      }
    }
    if (local_18 != 0) {
      iVar1 = FUN_00101edd(local_18);
      if (iVar1 != 0) {
        FUN_00101f38(local_18);
      }
    }
    FUN_00101860(local_24);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fd4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d81(void)

{
  return;
}




void FUN_00101934(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101dad(void)

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




void FUN_00102012(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ff3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d3f(void)

{
  return;
}




void FUN_001018b4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d6b(void)

{
  return;
}




void FUN_00101dc3(void)

{
  return;
}




undefined8 FUN_00101799(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101808("Calling good()...");
  FUN_0010177a();
  FUN_00101808("Finished good()");
  FUN_00101808("Calling bad()...");
  FUN_00101444();
  FUN_00101808("Finished bad()");
  return 0;
}




void FUN_00101d13(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_0010177a(void)

{
  FUN_00101539();
  FUN_00101660();
  return;
}




void FUN_00101d1e(void)

{
  return;
}




void FUN_00102040(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00101cf9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101660(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00101cdb();
  if (iVar1 != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    iVar1 = FUN_00101f5b(&DAT_00105020);
    if (iVar1 != 0) {
      iVar1 = FUN_00101e10(FUN_001013e6,&local_24,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = FUN_00101e10(FUN_001013e6,&local_24,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_20 != 0) {
        iVar1 = FUN_00101edd(local_20);
        if (iVar1 != 0) {
          FUN_00101f38(local_20);
        }
      }
      if (local_18 != 0) {
        iVar1 = FUN_00101edd(local_18);
        if (iVar1 != 0) {
          FUN_00101f38(local_18);
        }
      }
      FUN_00102012(DAT_00105020);
      FUN_00101860(local_24);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f5b(undefined8 *param_1)

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




void FUN_00101d4a(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




bool FUN_00101edd(pthread_t *param_1)

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




void FUN_00101909(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101e10(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dd9,local_18);
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




ulong FUN_00101bfc(long param_1,ulong param_2,long param_3)

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




void FUN_00101d55(void)

{
  return;
}




void FUN_0010198a(undefined4 param_1)

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




void FUN_001020b0(void)

{
  return;
}




void FUN_001019e4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a0c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a65(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d34(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f30)();
  return;
}




ulong FUN_00101af8(long param_1,ulong param_2,long param_3)

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




void FUN_00101d60(void)

{
  return;
}




void FUN_00101a98(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d76(void)

{
  return;
}




void FUN_00101dd9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101f38(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101808(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101cea(void)

{
  return 0;
}




void FUN_001013a9(int *param_1)

{
  undefined4 local_14;
  
  for (local_14 = 0; local_14 < 1000000; local_14 = local_14 + 1) {
    *param_1 = *param_1 + 1;
  }
  return;
}




undefined8 FUN_00101cdb(void)

{
  return 1;
}




void FUN_00101d29(void)

{
  return;
}




void FUN_001018de(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010195f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d97(void)

{
  return;
}




void FUN_00101888(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dce(void)

{
  return;
}




void FUN_00101539(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00101cea();
  if (iVar1 == 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    iVar1 = FUN_00101f5b(&DAT_00105020);
    if (iVar1 != 0) {
      iVar1 = FUN_00101e10(FUN_001013e6,&local_24,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = FUN_00101e10(FUN_001013e6,&local_24,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_20 != 0) {
        iVar1 = FUN_00101edd(local_20);
        if (iVar1 != 0) {
          FUN_00101f38(local_20);
        }
      }
      if (local_18 != 0) {
        iVar1 = FUN_00101edd(local_18);
        if (iVar1 != 0) {
          FUN_00101f38(local_18);
        }
      }
      FUN_00102012(DAT_00105020);
      FUN_00101860(local_24);
    }
  }
  else {
    FUN_00101808("Benign, fixed string");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d8c(void)

{
  return;
}




void FUN_00101da2(void)

{
  return;
}



