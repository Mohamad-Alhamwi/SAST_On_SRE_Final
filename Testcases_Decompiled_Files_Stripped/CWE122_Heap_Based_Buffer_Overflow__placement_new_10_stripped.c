
void FUN_0010191c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101fcf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f91(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102070(void)

{
  return;
}




ulong FUN_00101bb9(long param_1,ulong param_2,long param_3)

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




void FUN_00101d54(void)

{
  return;
}




void FUN_00101845(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d96(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d8b(void)

{
  return;
}




void FUN_001018f1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d6a(void)

{
  return;
}




undefined8 FUN_00101ca7(void)

{
  return 0;
}




undefined8 FUN_00101c98(void)

{
  return 1;
}




void FUN_0010172b(void)

{
  FUN_00101475();
  FUN_00101524();
  FUN_001015c5();
  FUN_0010167f();
  return;
}




void FUN_001017eb(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101947(undefined4 param_1)

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




void FUN_00101ce6(void)

{
  return;
}




void FUN_00101d28(void)

{
  return;
}




bool FUN_00101e9a(pthread_t *param_1)

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




void FUN_00101d3e(void)

{
  return;
}




void FUN_00102000(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d07(void)

{
  return;
}




void FUN_00101475(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_28;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (DAT_00105010 != 0) {
    local_28 = pvVar1;
  }
  if (DAT_00105020 == 0) {
    puVar3 = (undefined4 *)FUN_001017af(4,local_28);
    *puVar3 = 5;
    FUN_0010181d(*puVar3);
    free(local_28);
  }
  else {
    FUN_001017c5("Benign, fixed string");
  }
  return;
}




void FUN_00101d75(void)

{
  return;
}




void FUN_00101cfc(void)

{
  return;
}




undefined8 FUN_00101dcd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d96,local_18);
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




undefined8 FUN_00101ef5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101524(void)

{
  void *__ptr;
  void *pvVar1;
  undefined4 *puVar2;
  
  __ptr = malloc(4);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_00105010 != 0) {
      puVar2 = (undefined4 *)FUN_001017af(4,__ptr);
      *puVar2 = 5;
      FUN_0010181d(*puVar2);
      free(__ptr);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




int FUN_00101cb6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001013c9(void)

{
  void *__ptr;
  void *pvVar1;
  undefined4 *puVar2;
  
  __ptr = malloc(4);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_00105010 != 0) {
      puVar2 = (undefined4 *)FUN_001017af(8,__ptr);
      *puVar2 = 5;
      puVar2[1] = 10;
      FUN_0010181d(*puVar2);
      free(__ptr);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




ulong FUN_00101ab5(long param_1,ulong param_2,long param_3)

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




void FUN_00101d12(void)

{
  return;
}




undefined8 FUN_0010174a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017c5("Calling good()...");
  FUN_0010172b();
  FUN_001017c5("Finished good()");
  FUN_001017c5("Calling bad()...");
  FUN_001013c9();
  FUN_001017c5("Finished bad()");
  return 0;
}




void FUN_00101a22(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001019f4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101d33(void)

{
  return;
}




undefined8 FUN_001017af(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101cd0(void)

{
  return;
}




void FUN_0010167f(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_00105010 != 0) {
      puVar2 = (undefined4 *)FUN_001017af(8,pvVar1);
      *puVar2 = 5;
      puVar2[1] = 10;
      FUN_0010181d(*puVar2);
      free(pvVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_001017c5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010181d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_001019c9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d5f(void)

{
  return;
}




void FUN_00101cf1(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101fb0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101d80(void)

{
  return;
}




undefined8 FUN_00101f18(undefined8 *param_1)

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




void FUN_001015c5(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_28;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_00105020 != 0) {
      FUN_001017c5("Benign, fixed string");
      pvVar1 = local_28;
    }
    local_28 = pvVar1;
    if (DAT_00105010 != 0) {
      puVar2 = (undefined4 *)FUN_001017af(8,local_28);
      *puVar2 = 5;
      puVar2[1] = 10;
      FUN_0010181d(*puVar2);
      free(local_28);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_0010189b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d49(void)

{
  return;
}




void FUN_00101cdb(void)

{
  return;
}




void FUN_001019a1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a55(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101871(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001018c6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d1d(void)

{
  return;
}



