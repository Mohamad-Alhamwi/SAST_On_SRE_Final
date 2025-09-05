
/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_001021d4(void)

{
  return;
}




void FUN_001021f5(void)

{
  return;
}




void FUN_001014c9(void)

{
  uint16_t uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = -1;
  iVar2 = FUN_00102191();
  if (iVar2 != 0) {
    local_58 = -1;
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      local_48._0_8_ = local_48._0_8_ & 0xffffffff;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar3 = bind(iVar2,&local_48,0x10);
      if (((iVar3 != -1) && (iVar3 = listen(iVar2,5), iVar3 != -1)) &&
         (local_58 = accept(iVar2,(sockaddr *)0x0,(socklen_t *)0x0), local_58 != -1)) {
        sVar4 = recv(local_58,local_1e,0xd,0);
        iVar3 = (int)sVar4;
        if ((iVar3 != -1) && (iVar3 != 0)) {
          local_1e[iVar3] = '\0';
          local_5c = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
    if (local_58 != -1) {
      close(local_58);
    }
  }
  iVar2 = FUN_00102191();
  if (iVar2 != 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_5c < 10) {
      *(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2) = 1;
      for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
        FUN_00101d16(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
      }
    }
    else {
      FUN_00101cbe("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00102393(pthread_t *param_1)

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




void FUN_00102242(void)

{
  return;
}




void FUN_00101d6a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102279(void)

{
  return;
}




void FUN_00101ec2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102221(void)

{
  return;
}




void FUN_00101f1b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010226e(void)

{
  return;
}




void FUN_00101b54(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  iVar1 = FUN_00102191();
  if (iVar1 != 0) {
    local_40 = 7;
  }
  iVar1 = FUN_00102191();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_00101d16(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101cbe("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101c1c(void)

{
  FUN_001016a6();
  FUN_00101899();
  FUN_00101a7e();
  FUN_00101b54();
  return;
}




void FUN_00101899(void)

{
  uint16_t uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = -1;
  iVar2 = FUN_00102191();
  if (iVar2 != 0) {
    local_58 = -1;
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      local_48._0_8_ = local_48._0_8_ & 0xffffffff;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar3 = bind(iVar2,&local_48,0x10);
      if (((iVar3 != -1) && (iVar3 = listen(iVar2,5), iVar3 != -1)) &&
         (local_58 = accept(iVar2,(sockaddr *)0x0,(socklen_t *)0x0), local_58 != -1)) {
        sVar4 = recv(local_58,local_1e,0xd,0);
        iVar3 = (int)sVar4;
        if ((iVar3 != -1) && (iVar3 != 0)) {
          local_1e[iVar3] = '\0';
          local_5c = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
    if (local_58 != -1) {
      close(local_58);
    }
  }
  iVar2 = FUN_00102191();
  if (iVar2 != 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_5c < 0) || (9 < local_5c)) {
      FUN_00101cbe("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2) = 1;
      for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
        FUN_00101d16(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102200(void)

{
  return;
}




void FUN_00101e15(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102216(void)

{
  return;
}




undefined8 FUN_001023ee(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001024c8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101200(PTR_LOOP_00105008);
    }
    FUN_00101410();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00102258(void)

{
  return;
}




void FUN_00102284(void)

{
  return;
}




undefined8 FUN_001022c6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010228f,local_18);
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




void FUN_00101f4e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d94(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cbe(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102570(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
  return;
}




void FUN_0010220b(void)

{
  return;
}




ulong FUN_001020b2(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a7e(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  iVar1 = FUN_001021a0();
  if (iVar1 == 0) {
    local_40 = 7;
  }
  else {
    FUN_00101cbe("Benign, fixed string");
  }
  iVar1 = FUN_00102191();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_00101d16(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101cbe("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_001021af(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010222c(void)

{
  return;
}




void FUN_001016a6(void)

{
  uint16_t uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = -1;
  iVar2 = FUN_00102191();
  if (iVar2 != 0) {
    local_58 = -1;
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      local_48._0_8_ = local_48._0_8_ & 0xffffffff;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar3 = bind(iVar2,&local_48,0x10);
      if (((iVar3 != -1) && (iVar3 = listen(iVar2,5), iVar3 != -1)) &&
         (local_58 = accept(iVar2,(sockaddr *)0x0,(socklen_t *)0x0), local_58 != -1)) {
        sVar4 = recv(local_58,local_1e,0xd,0);
        iVar3 = (int)sVar4;
        if ((iVar3 != -1) && (iVar3 != 0)) {
          local_1e[iVar3] = '\0';
          local_5c = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
    if (local_58 != -1) {
      close(local_58);
    }
  }
  iVar2 = FUN_001021a0();
  if (iVar2 == 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_5c < 0) || (9 < local_5c)) {
      FUN_00101cbe("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2) = 1;
      for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
        FUN_00101d16(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
      }
    }
  }
  else {
    FUN_00101cbe("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102191(void)

{
  return 1;
}




void FUN_001021df(void)

{
  return;
}




void FUN_00101dbf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e40(undefined4 param_1)

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




void FUN_0010224d(void)

{
  return;
}




void FUN_00102500(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001024a9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d3e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001021ea(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101e9a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101fae(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001021c9(void)

{
  return;
}




void FUN_00101d16(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010228f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_0010248a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102411(undefined8 *param_1)

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




void FUN_00102263(void)

{
  return;
}




void FUN_00102237(void)

{
  return;
}




void FUN_00101dea(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101eed(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001021a0(void)

{
  return 0;
}




void FUN_00101ce4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101c4f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101cbe("Calling good()...");
  FUN_00101c1c();
  FUN_00101cbe("Finished good()");
  FUN_00101cbe("Calling bad()...");
  FUN_001014c9();
  FUN_00101cbe("Finished bad()");
  return 0;
}



